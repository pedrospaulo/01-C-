#include <stdio.h>

int main (){
  int n;

  scanf("%d", &n);

  int mat[n], i, matricula;
  double nota[n], max=0.0;


  for ( i = 0; i < n; i++){
    scanf("%d %lf", &mat[i], &nota[i]);
  }
  for (i = 0; i < n; i++){
    if(nota[i] > max){
      max = nota[i];
      matricula = i;
    }
  }
  if (max < 8){
    printf("Minimum note not reached\n");
  }else{
    printf("%d\n", mat[matricula]);
  }
  return 0;
}
