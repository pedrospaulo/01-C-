/*
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){

  int n, x;

  int cont;

  scanf("%d", &n);
  if(1 < n && n <= 100){
    for(int i = 0; i < n; i++){
      scanf("%d", &x);

      cont = 0;
      if(x > 1 && x <= pow(10, 7)){
        for(int i1 = 1; i1 < sqrt(x); i1++){

          if(x%i == 0){
            cont++;
          }
          if(cont > 1){
            break;
          }
        }
      }

      if(cont == 1){
        printf("%d eh primo\n", x);
      }else {
        printf("%d nao eh primo\n", x);
      }
    }
  }

  return 0;
}
*/
