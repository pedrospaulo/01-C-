#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  float f;

  scanf("%f", &f);

  if (f < 0.0000){
    printf("Fora do intervalo\n");
  }else if (f >= 0.0000 && f <= 25.0000){
    printf("Intervalo [0,25]\n");
  }else if (f > 25.0000 && f <= 50.0000){
    printf("Intervalo (25,50]\n");
  }else if (f > 50.0000 && f <= 75.0000){
    printf("Intervalo (50,75]\n");
  }else if (f > 75.0000 && f <= 100.0000){
    printf("Intervalo (75,100]\n");
  }else if (f > 100.0000){
    printf("Fora do intervalo\n");
  }
  return 0;
}
