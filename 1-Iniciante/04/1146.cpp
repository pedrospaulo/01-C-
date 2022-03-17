#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  int X;

  while (true){

    scanf("%d", &X);

    if(X != 0){

      while(true){

        for(int i = 1; i <= X; i++){
        //  printf("%d", i);

          if (i > 0 && i < X){
            printf("%d ", i);
          }

          if (i == X){
            printf("%d\n", i);
          }

        }
        break;
      }
    }else{
      break;
    }

  }

  return 0;
}
