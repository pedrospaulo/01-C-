#include <stdio.h>
#include <math.h>

int main (){

  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  if (a >= b){
    printf ("O JOGO DUROU %d HORA(S)\n", (24 - a) + b);
  }else{
    printf ("O JOGO DUROU %d HORA(S)\n", b - a);
  }

  return 0;
}
