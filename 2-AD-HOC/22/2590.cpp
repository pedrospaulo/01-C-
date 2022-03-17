/*#include <stdio.h>
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

      printf("%d\n", (int)pow(7, N)%10);

    }else{

      break;

    }
  }
  return 0;
}*/

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

      if(N % 4 == 1){
        printf("7\n");
      }else if(N % 4 == 2){
        printf("9\n");
      }else if(N % 4 == 3){
        printf("3\n");
      }else if(N % 4 == 0){
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
