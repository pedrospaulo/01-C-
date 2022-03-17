/* Declare as variaveis
definir o numero de horas
calcular o fuso horario
imprimir o valor total de horas
*/

#include <stdio.h>
#include <math.h>

int main(){

  int S, T, F;
  int soma;
  int aux = 0;

  scanf ("%d %d %d", &S, &T, &F);

  if (0 <= S <= 23 && 1 <= T <= 12 && -5 <= F <= 5){
    soma = S + T + F;
    if (soma <= 0){
      soma = 24 + soma;
      printf("%d\n", soma%24);
    }else if (soma == 24){
      aux = 0;
      soma = aux;
      printf ("%d\n", soma%24);
    }else{
      printf("%d\n", soma%24);
    }
  }
  return 0;
}
