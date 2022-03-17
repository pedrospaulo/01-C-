#include <stdio.h>

int main (){

  int n;
  long int t;

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%lu", &t);

    if(2015 - t <= 0){
      printf("%ld A.C.\n", (t - 2015) + 1);
    }else{
      printf("%ld D.C.\n", 2015 - t);
    }
  }
  return 0;
}
