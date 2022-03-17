#include <stdio.h>

int main(){

  int in;
  int aux = 0;
  int pos = 0;

  for(int i = 0; i < 100; i++){
    scanf("%d\n", &in);
    if(in > aux){
      aux = in;
      pos = i;
    }
  }
  printf("%d\n%d\n", aux, pos + 1);

  return 0;
}
