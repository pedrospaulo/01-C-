#include <stdio.h>

int main(){

  int x, y;

  while(true){

    scanf ("%d", &x);
    scanf ("%d", &y);

    if (x == 0 || y == 0){
      break;
    }

    if(x > 0 && y > 0){
      printf("primeiro\n");
    }else if(x < 0 && y > 0){
      printf("segundo\n");
    }else if(x < 0 && y < 0){
      printf("terceiro\n");
    }else if(x > 0 && y < 0){
      printf("quarto\n");
    }

  }

  return 0;

}
