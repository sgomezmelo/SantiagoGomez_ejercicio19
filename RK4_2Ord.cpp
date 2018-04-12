#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

float dzdx (float y){
  return -y;
}

float dydx(float z){
  return z;
}

int main(){
  float y = 1;
  float x = 0;
  float z = 0;
  float h = 0.1;
  int N = 10/h;
  for(int i = 0; i<N; i++){
    cout << x << " "<< y << " " << z  <<endl;
    x = x+h;
    float k1_y = dydx(z);
    float k2_y = dydx(z+k1_y*h/2);
    float k3_y = dydx(z+k2_y*h/2);
    float k4_y = dydx(z+k3_y*h);
    float pendiente_y = (h/6)*(k1_y+2*k2_y+2*k3_y+k4_y);
    y = y + pendiente_y;
    float k1_z = dzdx(y);
    float k2_z = dzdx(y+k1_z*h/2);
    float k3_z = dzdx(y+k2_z*h/2);
    float k4_z = dzdx(y+k3_z*h);
    float pendiente_z = (h/6)*(k1_z+2*k2_z+2*k3_z+k4_z);
    z = z + pendiente_z;
  }
  return 0;
}

