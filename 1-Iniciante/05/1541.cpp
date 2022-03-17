#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){

  int a, b, c, ar, por, l;

  while(cin >> a){
    if(a == 0){
      break;
    }
    cin >> b >> c;

    ar = a * b;
    por=(ar*100)/c;
    l = pow(por, 0.5);

    printf("%d\n", l);
  }
  return 0;
}
