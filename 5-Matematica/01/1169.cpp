//N = NUMERO DE CASOS, X = NUMERO DE CASAS DO TABULEIRO
//qg = QUANTIDADE DE GRAOS
//tg = PESO DO GRAO EM GRAMA

#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
  int N, X;

  scanf("%d", &N);

  if(1 <= N <= 100){

    for(int i = 0; i < N; i++){

      scanf("%d", &X);

      printf("%lld kg\n", (long long)(pow(2, X)/ 12000));
    }
  }
  return 0;
}
