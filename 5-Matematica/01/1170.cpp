#include <stdio.h>

int main (){

  int N, D;
  float C, R;

  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    scanf("%f", &C);
    D = 0;
    while(true){
      if (1 < C){
        R = C / 2;
        C = R;
        D++;
      }else{
        break;
      }

    }
    printf("%d dias\n", D);
  }
  return 0;
}
