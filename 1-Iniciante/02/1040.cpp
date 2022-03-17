#include <stdio.h>

int main (){

  float a1, a2, a3, a4, rec, media;

  scanf("%f", &a1);
  scanf("%f", &a2);
  scanf("%f", &a3);
  scanf("%f", &a4);

  media = (a1*2 + a2*3 + a3*4 + a4*1) / (10.0);
  printf("Media: %.1f\n", media);

  if (media >= 7.0){
    printf("Aluno aprovado.\n");
  }
  else if (media < 5.0){
    printf("Aluno reprovado.\n");
  }
  else if (media >= 5.0 && media < 7.0){
    printf("Aluno em exame.\n");
    scanf("%f", &rec);
    printf("Nota do exame: %.1f\n", rec);
      if ((media + rec)/2.0 >= 5.0){
        printf("Aluno aprovado.\n");
      }else{
        printf("Aluno reprovado.\n");
      }
      printf("Media final: %.1f\n", (media + rec) / 2.0 );
  }



  return 0;
}
