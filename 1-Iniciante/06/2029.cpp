#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

  double v, d;
  double r;
  float pi = 3.14;

  while(cin >> v >> d){

    r = d / 2;

    printf("ALTURA = %.2lf\n", v / (pi * r * r));
    printf("AREA = %.2lf\n", pi * r * r);
  }

  return 0;
}
