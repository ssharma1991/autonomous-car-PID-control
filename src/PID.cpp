#include "PID.h"
#include <iostream>
/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp=Kp_;
  Ki=Ki_;
  Kd=Kd_;
  cte_p=0;
  cte_sum=0;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  p_error=Kp*cte;
  d_error=Kd*(cte-cte_p);
  cte_p=cte;
  i_error=Ki*(cte_sum);
  cte_sum+=cte;
  //std::cout<<"p_ang:"<<p_error<<", d_ang:"<<d_error<<", i_ang:"<<i_error<< std::endl;
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return -(p_error+i_error+d_error);  // TODO: Add your total error calc here!
}
