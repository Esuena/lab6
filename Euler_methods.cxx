#include <iostream>
#include <cmath>

using namespace std;

int main(){
 double N=5;//number of steps
 const double lambda=-0.5;
 const double T=15*log(0.5)/lambda;//end of interval
 double dt=T/(N-1);
 double y, g, w, a; 
 y=1;//for t=0
 g=1;
 w=1;
 
 //start with Euler forward
 for(double t=dt; t<=T; t+=dt){
  y*=(1+lambda*dt);//Euler forward
  g/=(1-lambda*dt);//Euler backward
  w*=(1+dt*lambda/2)/(1-dt*lambda/2);//new method
  a=exp(lambda*t);//analytic
  
  cout << t << "\t" << y << "\t" << g << "\t" << w << "\t" << a << endl;
 }
 return 0;
}