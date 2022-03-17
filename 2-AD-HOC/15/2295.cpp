#include <stdio.h>

int main(){

  float A, G, Ra, Rg;
  float atg, ata;

  scanf("%f %f %f %f", &A, &G, &Ra, &Rg);

  atg = Rg / G;
  ata = Ra / A;

  if (ata > atg){
    printf("A\n");
  }else{
    printf("G\n");
  }
  return 0;
}
