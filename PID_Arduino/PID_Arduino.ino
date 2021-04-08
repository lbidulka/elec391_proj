#define PI 3.14159265

double pid_integrator;
double pid_prev_error;
int Kp;
int Ki;
int Kd;
int Tau;
long sample_time = 0; // 4 Cycles               
long startTime ; 
double diff_array[4];
double diff_mult[4] = {pow(exp(-Tau),7*sample_time/2), pow(exp(-Tau),5*sample_time/2), pow(exp(-Tau),3*sample_time/2), pow(exp(-Tau),sample_time/2)};
short path_points[8150][2];
// ^ Assuming pow and exp is 20 Cyles each. Each term is 78 Cycles, thus 4 + 78 * 4 = 316 Cycles

void setup() { // 12 Cycles
  pid_integrator = 0; // 4 Cycles
  pid_prev_error = 0; // 4 Cycles
  Kp = 100; // 4 Cycles
  Ki = 50; // 4 Cycles
  Kd = 300; // 4 Cycles
  Tau = 280; // 4 Cycles
  generate_path();
}

void loop() { // 10 Cycles
  double desired_value = analogRead(1); // 4 + 5 = 9 Cycles
  double actual_value = analogRead(2); // 4 + 5 = 9 Cycles
  double error = desired_value - actual_value; // 4 + 18 = 22 Cycles
 
  sample_time = micros() - startTime; // 4 + 10 + 18 = 22 Cycles
  startTime = micros(); // 4 + 10 = 14 Cycles

  // Proportional
  double proportional = Kp*error; // 4 + 18 = 22 Cycles

  // Integral
  pid_integrator = pid_integrator + 0.5*Ki*sample_time*(error + pid_prev_error); // 4 + 18 + 18 + 18 + 18 = 76 Cycles

  diff_array[3] = Kd*(error - pid_prev_error)/sample_time; // 4 + 18 + 18 + 20 = 60 Cycles
  double pid_differentiator = 0; // 4 Cycles

  // 4 * (4 + 5 + 18 + 18) = 180 Cycles
  for (int i=0; i < 4; i++){
      pid_differentiator = pid_differentiator + (diff_array[i]*diff_mult[i]);
  }

  // 4 * (5 + 4) = 36 cycles
  for (int i=0; i < 4; i++){
      diff_array[i]=diff_array[i+1];
  }
  
  pid_prev_error = error; // 4 Cycles
  
  analogWrite(3, pid_differentiator); // 6 Cycles

  delayMicroseconds(948); // Delay by 0.948 mS to facilitate easy tuning
  // Total Number of Clock Cycles = 830
}

void generate_path() {
  int t = 1000;
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
  double x_value_increment = 0.005;
  double table_origin[2] = {0.16214, 0.3};
  double degrees_to_radians = PI/180;
  
  double current_point[2];
  double next_point[2];
  double starting_point[2] = {0.2, 0.15};
  double first_marsh_point[2] = {(table_origin[1]-table_length/4*sin(table_angle*degrees_to_radians))-0.05*sin((90-table_angle)*degrees_to_radians), (table_origin[2]+table_length/4*cos(table_angle*degrees_to_radians))-0.05*cos((90-table_angle)*degrees_to_radians)};
  double second_marsh_point[2] = {table_origin[1]-0.05*sin((90-table_angle)*degrees_to_radians), table_origin[2]-0.05*sin((90-table_angle)*degrees_to_radians)};
  double third_marsh_point[2] = {(table_origin[1]+table_length/4*sin(table_angle*degrees_to_radians))-0.05*sin((90-table_angle)*degrees_to_radians), (table_origin[2]-table_length/4*cos(table_angle*degrees_to_radians))-0.05*cos((90-table_angle)*degrees_to_radians)};
  double first_garbage_point[2] = {first_marsh_point[1]-0.1*sin((90-table_angle)*degrees_to_radians), first_marsh_point[2]-0.1*cos((90-table_angle)*degrees_to_radians)};
  double second_garbage_point[2] = {second_marsh_point[1]-0.1*sin((90-table_angle)*degrees_to_radians), second_marsh_point[2]-0.1*cos((90-table_angle)*degrees_to_radians)};
  double third_garbage_point[2] = {third_marsh_point[1]-0.1*sin((90-table_angle)*degrees_to_radians), third_marsh_point[2]-0.1*cos((90-table_angle)*degrees_to_radians)};

  int path_vector_length = 11;
  int path_vector[path_vector_length] = {garbage, first_marsh_idle, first_marsh, garbage, second_marsh_idle, second_marsh, garbage, third_marsh_idle, third_marsh, garbage, idle};
  
  while (event_count <= path_vector_length) {
      int event = path_vector[event_count];
      double x_value = 10;

      switch (event){
          case garbage: 
              if (event_count == 1){
                  current_point[1] = starting_point[1];
                  current_point[2] = starting_point[2];
                  next_point[1] = second_garbage_point[1];
                  next_point[2] = second_garbage_point[2];
              }
              else if (path_vector[event_count - 1] == first_marsh){
                  current_point[1] = first_marsh_point[1];
                  current_point[2] = first_marsh_point[2];
                  next_point[1] = first_garbage_point[1];
                  next_point[2] = first_garbage_point[2];
              }
              else if (path_vector[event_count - 1] == second_marsh){
                  current_point[1] = second_marsh_point[1];
                  current_point[2] = second_marsh_point[2];
                  next_point[1] = second_garbage_point[1];
                  next_point[2] = second_garbage_point[2];
              }
              else {
                  current_point[1] = third_marsh_point[1];
                  current_point[2] = third_marsh_point[2];
                  next_point[1] = third_garbage_point[1];
                  next_point[2] = third_garbage_point[2];
              }
          case first_marsh_idle:
              current_point[1] = second_garbage_point[1];
              current_point[2] = second_garbage_point[2];
              next_point[1] = first_garbage_point[1];
              next_point[2] = first_garbage_point[2];
          case first_marsh:
              current_point[1] = first_garbage_point[1];
              current_point[2] = first_garbage_point[2];
              next_point[1] = first_marsh_point[1];
              next_point[2] = first_marsh_point[2];
          case second_marsh_idle: 
              current_point[1] = first_garbage_point[1];
              current_point[2] = first_garbage_point[2];
              next_point[1] = second_garbage_point[1]; 
              next_point[2] = second_garbage_point[2];   
          case second_marsh: 
              current_point[1] = second_garbage_point[1];
              current_point[2] = second_garbage_point[2];
              next_point[1] = second_marsh_point[1];
              next_point[2] = second_marsh_point[2];
          case third_marsh_idle:
              current_point[1] = second_garbage_point[1];
              current_point[2] = second_garbage_point[2];
              next_point[1] = third_garbage_point[1];
              next_point[2] = third_garbage_point[2];
          case third_marsh:
              current_point[1] = third_garbage_point[1];
              current_point[2] = third_garbage_point[2];
              next_point[1] = third_marsh_point[1];
              next_point[2] = third_marsh_point[2];
          case idle:
              current_point[1] = third_garbage_point[1];
              current_point[2] = third_garbage_point[2];
              next_point[1] = second_garbage_point[1];
              next_point[2] = second_garbage_point[2];
      }

      double x_point = current_point[1];
      double y_point = current_point[2];
      double increment_x;
      double increment_y;

      while ((abs(x_point - current_point[1]) <= abs(next_point[1] - current_point[1])) && (abs(y_point - current_point[2]) <= abs(next_point[2] - current_point[2]))) {
          if (event == first_marsh || event == second_marsh || event == third_marsh){
              increment_x = (next_point[1] - current_point[1]) / (1*pow(x_value,3));
              increment_y = (next_point[2] - current_point[2]) / (1*pow(x_value,3));
              if (1*pow(x_value,3) < 7000){
                  x_value = x_value + x_value_increment;
              }
          }
          else {
              increment_x = (next_point[1] - current_point[1]) / t;
              increment_y = (next_point[2] - current_point[2]) / t;
          }
          x_point = x_point + increment_x;
          y_point = y_point + increment_y;
          array_position = array_position + 1;
      }

      for (int i = 0; i < 750; i++){
          path_points[array_position][1] = x_point;
          path_points[array_position][1] = x_point;
          array_position = array_position + 1;
      }

      event_count = event_count +1;
  }
}
