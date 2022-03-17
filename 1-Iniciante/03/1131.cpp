#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

  int p1, p2;
  int opcao;
  int inter =0;
  int gremio = 0;
  int grenal = 0;
  int empate = 0;

  while(true){
    scanf("%d", &p1);
    scanf("%d", &p2);

    if(p1 > p2){
      inter ++;
    }
    if(p2 > p1){
      gremio ++;
    }
    if(p1 == p2){
      empate ++;
    }
    grenal ++;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &opcao);

    if(opcao == 2){
      break;
    }
  }
  printf("%d grenais\n", grenal);
  printf("Inter:%d\n", inter);
  printf("Gremio:%d\n", gremio);
  printf("Empates:%d\n", empate);

  if(inter > gremio){
    printf("Inter venceu mais\n");
  }
  if(gremio > inter){
    printf("Gremio venceu mais\n");
  }
  if(inter == gremio){
    printf("Nao houve vencedor\n");
  }
  return 0;
}
