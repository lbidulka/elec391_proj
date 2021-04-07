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
// ^ Assuming pow and exp is 20 Cyles each. Each term is 78 Cycles, thus 4 + 78 * 4 = 316 Cycles

void setup() { // 12 Cycles
  pid_integrator = 0; // 4 Cycles
  pid_prev_error = 0; // 4 Cycles
  Kp = 100; // 4 Cycles
  Ki = 50; // 4 Cycles
  Kd = 300; // 4 Cycles
  Tau = 280; // 4 Cycles
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
