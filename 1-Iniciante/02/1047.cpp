#include <stdio.h>
#include <math.h>
#include <iostream>

int main (){
  //inicio
  int a, b;
  //final
  int c, d;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);


  int inicio = a * 60 + b;
  int fim = c * 60 + d;
  int tempo = 0;

  if(a <= c){
    tempo = fim - inicio;
    if(tempo == 0){
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24, tempo%60);
    }else{
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (tempo - tempo%60) / 60, tempo%60);
    }
  }else{
    tempo = (24 * 60 - inicio) + fim;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(tempo - tempo%60) / 60, tempo%60);
  }
  return 0;
}
