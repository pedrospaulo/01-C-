#include <stdio.h>
#include <math.h>

int main(){
  int n;
  double raiz;

  scanf("%d", &n);

  if(n == 0){
    raiz = 0.0000000000;
  }
  if(n == 1){
    raiz = 0.1666666667;
  }
//  if(n == 1){
//    raiz = 1/(6.0 + (1/6));
//    printf("%lf\n\n", raiz);
//  }

  for(int i = 2; i <= n; i++){

    if(i == 2){
      raiz = 6.0 +(1.0/6.0);
      raiz = 1.0 / raiz;
    }else{
      raiz = 6.0 + raiz;
      raiz = 1.0 / raiz;
    }
  }
  raiz = raiz + 3;

  printf("%.10lf\n", raiz);

  return 0;
}
