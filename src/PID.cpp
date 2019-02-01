#include "PID.h"

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
  
  i_error = 0.0;
}

void PID::UpdateError(double cte) {
  static double prev_cte = cte;
  
  p_error = cte;
  i_error = i_error + cte;
  d_error = cte - prev_cte;

  prev_cte = cte;
}

double PID::TotalError() {
  return Kp * p_error + Ki * i_error + Kd * d_error;
}