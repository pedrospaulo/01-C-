#include <stdio.h>

int main(){

  int A, B, C, D;
  int d;

  scanf("%d %d %d %d", &A, &B, &C, &D);

  d = (A + D) - (C + B);

  if(d < 0){
    d = 0 - d;
  }

  printf("%d\n", d);

  return 0;

}
