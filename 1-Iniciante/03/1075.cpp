#include <stdio.h>

int main(){

  int N;

  scanf("%d", &N);

  for(int i = 2; i <= 10000; i = i + N){
    printf("%d\n", i);
  }


  return 0;
}
