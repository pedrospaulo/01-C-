#include <stdio.h>

int main (){

  int a, b;

  scanf("%d", &b);
  for (a = 1; a <= b; a = a+2){
    printf("%d\n", a);
  }

  return 0;
}
