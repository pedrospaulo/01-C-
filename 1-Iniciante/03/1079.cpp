#include <stdio.h>


int main (){

  int N;
  float x, y, z;


  scanf("%d", &N);

  for(int i = 0; 1 < N; ++i){
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);


    printf("%.1f\n", (x*2 + y*3 + z*5) / (2.0 + 3.0 + 5.0));
  }


  return 0;
}
