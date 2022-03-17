#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){

  long long int x, y, w, r, aux;
  int c, n;

  while (cin>>n){
    c = 0;
    x = 3;
    y = 5;

    while (c < n){
      if (x%3 == 0){
        c++;
      }else{
        w=x;
        while(w != 0){
          r = w % 10;
          w = w / 10;

          if(r==3){
            c++;
            w=0;
          }
        }
      }
      aux = x + y;
      x = y;
      y = aux;
    }
    printf("%lld\n", aux - x);
  }
  return 0;
}
