#include "PID_Arduino.h"

#define PI 3.14159265
#define CLK 1
#define SHOUDLER_DT 2
#define ELBOW_DT 3
#define WRIST_DT 4
#define CLAW_DT 5
#define SHOULDER_MOTOR 6
#define ELBOW_MOTOR 7
#define WRIST_MOTOR 8
#define CLAW_MOTOR 9

PID Shoulder;
PID Elbow;
PID Wrist;
PID Claw;

float bicep_length = 0.2;
float forearm_length = 0.15;
float sample_time = 0.001;             
int path_points_position = 0;
int path_points[100][3]; 
int currentStateCLK;
int lastStateCLK;

void setup() { // 12 Cycles
  pinMode(CLK,INPUT);
  pinMode(SHOUDLER_DT,INPUT);
  pinMode(ELBOW_DT,INPUT);
  pinMode(WRIST_DT,INPUT);
  pinMode(CLAW_DT,INPUT);
  pinMode(SHOULDER_MOTOR, OUTPUT);
  pinMode(ELBOW_MOTOR, OUTPUT);
  pinMode(WRIST_MOTOR, OUTPUT);
  pinMode(CLAW_MOTOR, OUTPUT);
  
  generate_path();
  float modifier;

  lastStateCLK = digitalRead(CLK);

  // Shoulder Init
  Shoulder.Kp = 3;
  Shoulder.Ki = 0.001;
  Shoulder.Kd = 0.2574;
  Shoulder.Tau = 600;
  Shoulder.limMin = -5;
  Shoulder.limMax = 5;
  Shoulder.integrator = 0;
  Shoulder.prevError = 0;
  Shoulder.encoderCounter = 0;
  modifier = 7;
  for (int i = 0; i < 4; i++) {
    Shoulder.diffMult[i] = pow(exp(-Shoulder.Tau),modifier*sample_time/2);
    modifier -= 2;
  }

  // Elbow Init
  Elbow.Kp = 2.2;
  Elbow.Ki = 0;
  Elbow.Kd = 0.11;
  Elbow.Tau = 600;
  Elbow.limMin = -5;
  Elbow.limMax = 5;
  Elbow.integrator = 0;
  Elbow.prevError = 0;
  Elbow.encoderCounter = 0;
  modifier = 7;
  for (int i = 0; i < 4; i++) {
    Elbow.diffMult[i] = pow(exp(-Elbow.Tau),modifier*sample_time/2);
    modifier -= 2;
  }

  // Wrist Init
  Wrist.Kp = 1;
  Wrist.Ki = 0.00007;
  Wrist.Kd = 0.03;
  Wrist.Tau = 600;
  Wrist.limMin = -5;
  Wrist.limMax = 5;
  Wrist.integrator = 0;
  Wrist.prevError = 0;
  Wrist.encoderCounter = 0;
  modifier = 7;
  for (int i = 0; i < 4; i++) {
    Wrist.diffMult[i] = pow(exp(-Wrist.Tau),modifier*sample_time/2);
    modifier -= 2;
  }
  
  // Claw Init
  Claw.Kp = 81;
  Claw.Ki = 0;
  Claw.Kd = 2;
  Claw.Tau = 600;
  Claw.limMin = -5;
  Claw.limMax = 5;
  Claw.integrator = 0;
  Claw.prevError = 0;
  Claw.encoderCounter = 0;
  modifier = 7;
  for (int i = 0; i < 4; i++) {
    Claw.diffMult[i] = pow(exp(-Claw.Tau),modifier*sample_time/2);
    modifier -= 2;
  }
}

void loop() { // 10 Cycles
  inverse_kinematics(); // 489 Cycles
  path_points_position += 1; // 4+18 = 22 Cycles

  calculate_pid(&Shoulder, SHOUDLER_DT); // 572 Cycles
  calculate_pid(&Elbow, ELBOW_DT); // 572 Cycles
  calculate_pid(&Wrist, WRIST_DT); // 572 Cycles 
  calculate_pid(&Claw, CLAW_DT); // 572 Cycles

  analogWrite(Shoulder.Output, SHOULDER_MOTOR); // 6 Cycles
  analogWrite(Elbow.Output, ELBOW_MOTOR); // 6 Cycles
  analogWrite(Wrist.Output, WRIST_MOTOR); // 6 Cycles
  analogWrite(Claw.Output, CLAW_MOTOR); // 6 Cycles

  delayMicroseconds(823); // Delay by 0.823 mS to facilitate easy tuning
  // Total Number of Clock Cycles = 2823 Cycles
}

// Overall = 489 Cycles
float inverse_kinematics() {
  float x = path_points[path_points_position][0]; // 4 Cycles
  float y = path_points[path_points_position][1]; // 4 Cycles
  float claw_status = path_points[path_points_position][2]; // 4 Cycles

  float q1 = abs(acos((pow(x,2) + pow(y,2) - pow(bicep_length,2) - pow(forearm_length,2)) / (2*bicep_length*forearm_length))); // 4+10+10+10+18+10+18+10+18+20+18+18 = 164 Cycles
  float gamma = atan(y/x); // 4+10+20 = 34 Cycles
  float beta = atan((forearm_length*sin(q1))/(bicep_length + forearm_length*cos(q1))); // 4+10+18+10+20+18+18+10 = 108 Cycles
  float q0 = abs(gamma - beta); // 4+10+18 = 32 Cycles

  // 11 + 4 + 4 = 19 Cycles
  if (claw_status == 0) {
    Claw.desiredValue = -0.6;
  }
  else {
    Claw.desiredValue = 0.3;
  }
  Shoulder.desiredValue = 35 * q0; // 4+18 = 22 Cycles
  Elbow.desiredValue = 35 * q1; // 4+18 = 22 Cycles
  Shoulder.desiredValue = 35 * (-0.8726 + q0 + q1); // 4+18+18+18+18 = 76 Cycles
}

// Overall = 572 Cycles
void calculate_pid(PID *pid, int encoderPin) {
  float actual_value = get_encoder_value(pid, encoderPin); // 4 + 124 = 128 Cycles
  float error = pid->desiredValue - actual_value; // 4 + 18 = 22 Cycles

  // Proportional
  float proportional = pid->Kp*error; // 4 + 18 = 22 Cycles

  // Integral
  pid->integrator = pid->integrator + 0.5*pid->Ki*sample_time*(error + pid->prevError); // 4 + 18 + 18 + 18 + 18 = 76 Cycles

  pid->diffArray[3] = pid->Kd*(error - pid->prevError)/sample_time; // 4 + 18 + 18 + 20 = 60 Cycles
  float pid_differentiator = 0; // 4 Cycles

  // 4 * (4 + 5 + 18 + 18) = 180 Cycles
  for (int i=0; i < 4; i++){
      pid_differentiator = pid_differentiator + (pid->diffArray[i]*pid->diffMult[i]);
  }

  // 4 * (5 + 4) = 36 cycles
  for (int i=0; i < 4; i++){
      pid->diffArray[i]=pid->diffArray[i+1];
  }
  
  pid->prevError = error; // 4 Cycles
  pid->Output = proportional + pid->integrator + pid_differentiator; // 4+18+18 = 40 Cycles
}

// Overall = 124 Cycles
float get_encoder_value(PID *pid, int pin){
  currentStateCLK = digitalRead(CLK); // 4+8 = 12 Cycles

  // 11+11+4+18+4+18 = 66 Cycles
  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){
    if (digitalRead(pin) != currentStateCLK) {
      pid->encoderCounter--;
    } else {
      pid->encoderCounter++;
    }
  }

  // Remember last CLK state
  lastStateCLK = currentStateCLK; // 4 Cycles

  return pid->encoderCounter * (360/1024); // 4+18+20 = 42 Cycles
}

void generate_path() {
  const int t = 10;
  const int wait_length = 5;
  const int claw_open = 0;
  const int claw_close = 1;
  int claw_old_state = claw_open;
  const int idle = 0;
  const int first_marsh = 1;
  const int first_marsh_idle = 2;
  const int second_marsh = 3;
  const int second_marsh_idle = 4;
  const int third_marsh = 5;
  const int third_marsh_idle = 6;
  const int garbage = 7;
  float table_length = 0.3;
  int table_angle = 50;
  int event_count = 1;
  int count = 1;
  int array_position = 0;
  float x_value_increment = 0.005;
  float table_origin[2] = {0.15, 0.3};
  float gripper_length = 0.098;
  float gripper_adjustment = 0.01;
  float degrees_to_radians = PI/180;
  
  float current_point[2];
  float next_point[2];
  float starting_point[2] = {0.2, 0.15};
  float first_marsh_point[2] = {(table_origin[0]-table_length/4*sin(table_angle*degrees_to_radians))-gripper_adjustment*sin(table_angle*degrees_to_radians)-gripper_length*sin((90-table_angle)*degrees_to_radians), 
                                (table_origin[1]+table_length/4*cos(table_angle*degrees_to_radians))+gripper_adjustment*cos(table_angle*degrees_to_radians)-gripper_length*cos((90-table_angle)*degrees_to_radians)};
  float second_marsh_point[2] = {table_origin[0]-gripper_adjustment*sin(table_angle*degrees_to_radians)-gripper_length*sin((90-table_angle)*degrees_to_radians), 
                                 table_origin[1]+gripper_adjustment*cos(table_angle*degrees_to_radians)-gripper_length*cos((90-table_angle)*degrees_to_radians)};
  float third_marsh_point[2] = {(table_origin[0]+table_length/4*sin(table_angle*degrees_to_radians))-gripper_adjustment*sin(table_angle*degrees_to_radians)-gripper_length*sin((90-table_angle)*degrees_to_radians), 
                                (table_origin[1]-table_length/4*cos(table_angle*degrees_to_radians))+gripper_adjustment*cos(table_angle*degrees_to_radians)-gripper_length*cos((90-table_angle)*degrees_to_radians)};
  float first_garbage_point[2] = {first_marsh_point[0]-0.1*sin((90-table_angle)*degrees_to_radians), 
                                  first_marsh_point[1]-0.1*cos((90-table_angle)*degrees_to_radians)};
  float second_garbage_point[2] = {second_marsh_point[0]-0.1*sin((90-table_angle)*degrees_to_radians), 
                                   second_marsh_point[1]-0.1*cos((90-table_angle)*degrees_to_radians)};
  float third_garbage_point[2] = {third_marsh_point[0]-0.1*sin((90-table_angle)*degrees_to_radians), 
                                  third_marsh_point[1]-0.1*cos((90-table_angle)*degrees_to_radians)};

  int path_vector_length = 11;
  int path_vector[path_vector_length] = {garbage, first_marsh_idle, first_marsh, garbage, second_marsh_idle, second_marsh, garbage, third_marsh_idle, third_marsh, garbage, idle};
  
  while (event_count <= path_vector_length) {
      int event = path_vector[event_count];
      float x_value = 8;

      switch (event){
          case garbage: 
              if (event_count == 1){
                  current_point[0] = starting_point[0];
                  current_point[1] = starting_point[1];
                  next_point[0] = second_garbage_point[0];
                  next_point[1] = second_garbage_point[1];
              }
              else if (path_vector[event_count - 1] == first_marsh){
                  current_point[0] = first_marsh_point[0];
                  current_point[1] = first_marsh_point[1];
                  next_point[0] = first_garbage_point[0];
                  next_point[1] = first_garbage_point[1];
              }
              else if (path_vector[event_count - 1] == second_marsh){
                  current_point[0] = second_marsh_point[0];
                  current_point[1] = second_marsh_point[1];
                  next_point[0] = second_garbage_point[0];
                  next_point[1] = second_garbage_point[1];
              }
              else {
                  current_point[0] = third_marsh_point[0];
                  current_point[1] = third_marsh_point[1];
                  next_point[0] = third_garbage_point[0];
                  next_point[1] = third_garbage_point[1];
              }
          case first_marsh_idle:
              current_point[0] = second_garbage_point[0];
              current_point[1] = second_garbage_point[1];
              next_point[0] = first_garbage_point[0];
              next_point[1] = first_garbage_point[1];
          case first_marsh:
              current_point[0] = first_garbage_point[0];
              current_point[1] = first_garbage_point[1];
              next_point[0] = first_marsh_point[0];
              next_point[1] = first_marsh_point[1];
          case second_marsh_idle: 
              current_point[0] = first_garbage_point[0];
              current_point[1] = first_garbage_point[1];
              next_point[0] = second_garbage_point[0]; 
              next_point[1] = second_garbage_point[1];   
          case second_marsh: 
              current_point[0] = second_garbage_point[0];
              current_point[1] = second_garbage_point[1];
              next_point[0] = second_marsh_point[0];
              next_point[1] = second_marsh_point[1];
          case third_marsh_idle:
              current_point[0] = second_garbage_point[0];
              current_point[1] = second_garbage_point[1];
              next_point[0] = third_garbage_point[0];
              next_point[1] = third_garbage_point[1];
          case third_marsh:
              current_point[0] = third_garbage_point[0];
              current_point[1] = third_garbage_point[1];
              next_point[0] = third_marsh_point[0];
              next_point[1] = third_marsh_point[1];
          case idle:
              current_point[0] = third_garbage_point[0];
              current_point[1] = third_garbage_point[1];
              next_point[0] = second_garbage_point[0];
              next_point[1] = second_garbage_point[1];
      }

      float x_point = current_point[0];
      float y_point = current_point[1];
      float increment_x;
      float increment_y;

      while ((abs(x_point - current_point[0]) <= abs(next_point[0] - current_point[0])) && (abs(y_point - current_point[1]) <= abs(next_point[1] - current_point[1]))) {
          if (event == first_marsh || event == second_marsh || event == third_marsh){
              increment_x = (next_point[0] - current_point[0]) / (1*pow(x_value,3));
              increment_y = (next_point[1] - current_point[1]) / (1*pow(x_value,3));
              if (1*pow(x_value,3) < 5000){
                  x_value = x_value + x_value_increment;
              }
          }
          else {
              increment_x = (next_point[0] - current_point[0]) / t;
              increment_y = (next_point[1] - current_point[1]) / t;
          }
          x_point = x_point + increment_x;
          y_point = y_point + increment_y;
          path_points[array_position][0] = x_point;
          path_points[array_position][1] = y_point;
          path_points[array_position][2] = claw_old_state;
          array_position = array_position + 1;
      }

      for (int i = 0; i < wait_length; i++){
        if ((event == first_marsh || event == second_marsh || event == third_marsh) && (i > wait_length/2)){
          path_points[array_position][0] = x_point;
          path_points[array_position][1] = y_point;
          path_points[array_position][2] = claw_close;
          claw_old_state = claw_close;
        }
        else if ((event == garbage) && (i > wait_length/2)) {
          path_points[array_position][0] = x_point;
          path_points[array_position][1] = y_point;
          path_points[array_position][2] = claw_open;
          claw_old_state = claw_open;
        }
        else {
          path_points[array_position][0] = x_point;
          path_points[array_position][1] = y_point;
          path_points[array_position][2] = claw_old_state;
        }

        array_position = array_position + 1;
      }

      event_count = event_count +1;
  }
}
