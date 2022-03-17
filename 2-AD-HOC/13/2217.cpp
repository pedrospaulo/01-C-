#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){

  int T;

  scanf("%d", &T);

  for(int i = 0; i < T; i++){

    int N;

    scanf("%d", &N);

    if (0 <= N <= pow(10, 9)){

      if(N % 2 == 1){
        printf("9\n");
      }else if(N % 2 == 0){
        printf("1\n");

      }else{
        break;
      }
    }else{
      break;
    }
  }
  return 0;
}
