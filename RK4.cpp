#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

float dydx (float y){
  return -y;
}

int main(){
  float y = 1;
  float x = 0;
  float h = 0.01;
  int N = 3/h;
  for(int i = 0; i<N; i++){
    cout << x << " "<< y <<endl;
    x = x+h;
    float k1 = dydx(y);
    float k2 = dydx(y+k1*h/2);
    float k3 = dydx(y+k2*h/2);
    float k4 = dydx(y+k3*h);
    y += (h/6)*(k1+2*k2+2*k3+k4);
  }
  return 0;
}

