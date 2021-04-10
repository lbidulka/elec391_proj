#include "PID_Arduino.h"

#define PI 3.14159265
#define CLK 1
#define SHOUDLER_DT 2
#define ELBOW_DT 3
#define WRIST_DT 4
#define SHOULDER_MOTOR 5
#define ELBOW_MOTOR 6
#define WRIST_MOTOR 7

PID Shoulder;
PID Elbow;
PID Wrist;

float bicep_length = 0.2;
float forearm_length = 0.15;
float sample_time = 0.001; // 4 Cycles               
int path_points_position = 0;
int path_points[100][2]; 
int currentStateCLK;
int lastStateCLK;

void setup() { // 12 Cycles
  pinMode(CLK,INPUT);
  pinMode(SHOUDLER_DT,INPUT);
  pinMode(ELBOW_DT,INPUT);
  pinMode(WRIST_DT,INPUT);
  pinMode(SHOULDER_MOTOR, OUTPUT);
  pinMode(ELBOW_MOTOR, OUTPUT);
  pinMode(WRIST_MOTOR, OUTPUT);
  
  generate_path();
  float modifier;

  lastStateCLK = digitalRead(CLK);

  // Shoulder Init
  Shoulder.Kp = 5;
  Shoulder.Ki = 0.1;
  Shoulder.Kd = 0.17;
  Shoulder.Tau = 600;
  Shoulder.limMin = -5.2;
  Shoulder.limMax = 5.2;
  Shoulder.integrator = 0;
  Shoulder.prevError = 0;
  Shoulder.encoderCounter = 0;
  modifier = 7;
  for (int i = 0; i < 4; i++) {
    Shoulder.diffMult[i] = pow(exp(-Shoulder.Tau),modifier*sample_time/2);
    modifier -= 2;
  }

  // Elbow Init
  Elbow.Kp = 10;
  Elbow.Ki = 0.1;
  Elbow.Kd = 0.2;
  Elbow.Tau = 600;
  Elbow.limMin = -5.2;
  Elbow.limMax = 5.2;
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
  Wrist.Ki = 0.1;
  Wrist.Kd = 0.2;
  Wrist.Tau = 600;
  Wrist.limMin = -5.2;
  Wrist.limMax = 5.2;
  Wrist.integrator = 0;
  Wrist.prevError = 0;
  Wrist.encoderCounter = 0;
  modifier = 7;
  for (int i = 0; i < 4; i++) {
    Wrist.diffMult[i] = pow(exp(-Wrist.Tau),modifier*sample_time/2);
    modifier -= 2;
  }
}

void loop() { // 10 Cycles
  inverse_kinematics();

  calculate_pid(&Shoulder, SHOUDLER_DT);
  calculate_pid(&Elbow, ELBOW_DT);
  calculate_pid(&Wrist, WRIST_DT);

  analogWrite(Shoulder.Output, SHOULDER_MOTOR);
  analogWrite(Elbow.Output, ELBOW_MOTOR);
  analogWrite(Wrist.Output, WRIST_MOTOR);

  delayMicroseconds(948); // Delay by 0.948 mS to facilitate easy tuning
  // Total Number of Clock Cycles = 830
}

float inverse_kinematics() {
  float x = path_points[path_points_position][0];
  float y = path_points[path_points_position][1];

  float q1 = abs(acos((pow(x,2) + pow(y,2) - pow(bicep_length,2) - pow(forearm_length,2)) / (2*bicep_length*forearm_length)));
  float gamma = atan(y/x);
  float beta = atan((forearm_length*sin(q1))/(bicep_length + forearm_length*cos(q1)));
  float q0 = abs(gamma - beta);

  Shoulder.desiredValue = 35 * q0;
  Elbow.desiredValue = 35 * q1;
  Shoulder.desiredValue = 35 * (-0.8726 + q0 + q1);
}

void calculate_pid(PID *pid, int encoderPin) {
  float actual_value = get_encoder_value(pid, encoderPin); // 4 + 5 = 9 Cycles
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
  pid->Output = proportional + pid->integrator + pid_differentiator;
}

float get_encoder_value(PID *pid, int pin){
  currentStateCLK = digitalRead(CLK);

  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){
    if (digitalRead(pin) != currentStateCLK) {
      pid->encoderCounter--;
    } else {
      pid->encoderCounter++;
    }
  }

  // Remember last CLK state
  lastStateCLK = currentStateCLK;

  return pid->encoderCounter * (360/1024);
}

void generate_path() {
  int t = 10;
  const int idle = 0;
  const int first_marsh = 1;
  const int first_marsh_idle = 2;
  const int second_marsh = 3;
  const int second_marsh_idle = 4;
  const int third_marsh = 5;
  const int third_marsh_idle = 6;
  const int garbage = 7;
  int table_length = 0.3;
  int table_angle = 50;
  int event_count = 1;
  int count = 1;
  int array_position = 0;
  float x_value_increment = 0.005;
  float table_origin[2] = {0.16214, 0.3};
  float degrees_to_radians = PI/180;
  
  float current_point[2];
  float next_point[2];
  float starting_point[2] = {0.2, 0.15};
  float first_marsh_point[2] = {(table_origin[0]-table_length/4*sin(table_angle*degrees_to_radians))-0.05*sin((90-table_angle)*degrees_to_radians), (table_origin[1]+table_length/4*cos(table_angle*degrees_to_radians))-0.05*cos((90-table_angle)*degrees_to_radians)};
  float second_marsh_point[2] = {table_origin[0]-0.05*sin((90-table_angle)*degrees_to_radians), table_origin[1]-0.05*cos((90-table_angle)*degrees_to_radians)};
  float third_marsh_point[2] = {(table_origin[0]+table_length/4*sin(table_angle*degrees_to_radians))-0.05*sin((90-table_angle)*degrees_to_radians), (table_origin[1]-table_length/4*cos(table_angle*degrees_to_radians))-0.05*cos((90-table_angle)*degrees_to_radians)};
  float first_garbage_point[2] = {first_marsh_point[0]-0.1*sin((90-table_angle)*degrees_to_radians), first_marsh_point[1]-0.1*cos((90-table_angle)*degrees_to_radians)};
  float second_garbage_point[2] = {second_marsh_point[0]-0.1*sin((90-table_angle)*degrees_to_radians), second_marsh_point[1]-0.1*cos((90-table_angle)*degrees_to_radians)};
  float third_garbage_point[2] = {third_marsh_point[0]-0.1*sin((90-table_angle)*degrees_to_radians), third_marsh_point[1]-0.1*cos((90-table_angle)*degrees_to_radians)};

  int path_vector_length = 11;
  int path_vector[path_vector_length] = {garbage, first_marsh_idle, first_marsh, garbage, second_marsh_idle, second_marsh, garbage, third_marsh_idle, third_marsh, garbage, idle};
  
  while (event_count <= path_vector_length) {
      int event = path_vector[event_count];
      float x_value = 10;

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
              if (1*pow(x_value,3) < 7000){
                  x_value = x_value + x_value_increment;
              }
          }
          else {
              increment_x = (next_point[0] - current_point[0]) / t;
              increment_y = (next_point[1] - current_point[1]) / t;
          }
          x_point = x_point + increment_x;
          y_point = y_point + increment_y;
          array_position = array_position + 1;
      }

      for (int i = 0; i < 5; i++){
          path_points[array_position][0] = x_point;
          path_points[array_position][1] = y_point;
          array_position = array_position + 1;
      }

      event_count = event_count +1;
  }
}
