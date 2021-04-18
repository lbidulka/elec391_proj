#ifndef PID_CONTROLLER_H
#define PID_CONTROLLER_H

typedef struct {
  float Kp;
  float Ki;
  float Kd;
  
  float Tau;
  
  float limMin;
  float limMax;

  float diffMult[4];
  float diffArray[4];
  float integrator;
  float prevError;

  float desiredValue;

  float encoderCounter;
  
  float Output;
} PID;

#endif
