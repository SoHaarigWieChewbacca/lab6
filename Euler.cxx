#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double y_f = 1.0;
  double y_b = 1.0;
  double y_m = 1.0;
  double y_a = 1.0;
  double lambda = -0.5;
  double dt = 1.5;
  double t = - log(2.0)/lambda;
  
  cout << 0*dt << "\t" << y_f << "\t" << y_b << "\t" << y_m << "\t" << y_a << endl;
  
  for(double i=dt; i<50*t; i+=dt){
    // forward Euler method
    y_f = y_f + lambda * y_f * dt;
    
    // backward Euler method
    y_b = y_b/(1.0 - lambda*dt);
    
    // mean
    y_m = y_m * (1 + 1.0/2.0 * dt * lambda)/(1 - 1.0/2.0 * dt * lambda);
    
    // analytic solution
    y_a = exp(lambda*i);
    
    cout << i << "\t" << y_f << "\t" << y_b << "\t" << y_m << "\t" << y_a << endl;
  }
  
  return 0;
}

