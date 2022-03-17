#include <stdio.h>

int main(){

  int a, n;
  int par = 0;
  int impar = 0;
  int pos = 0;
  int neg = 0;

  for(a = 1; a <= 5; a++){
    scanf("%d", &n);
    if (n%2 == 0){
    par++;
    }
    if (n%2 == 1 || n%2 == -1){
      impar++;
    }
    if (n>0){
      pos++;
    }
    if (n < 0){
      neg++;
    }
  }

  printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, pos, neg);
  printf("%d valor(es) impar(es)\n", impar);
  printf("%d valor(es) positivo(s)\n", pos);
  printf("%d valor(es) negativo(s)\n", neg);


return 0;
}
