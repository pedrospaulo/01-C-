#include <stdio.h>
#include <iostream>

int main(){

  int a, b, i;

  int in = 0;
  int out = 0;

  scanf("%d", &a);
  for(i = 0; i < a; i++){
    scanf("%d", &b);
    if(b >= 10 && b <= 20){
      in++;
    }else{
      out++;
    }
  }
  printf("%d in\n", in);
  printf("%d out\n", out);

  return 0;
}
