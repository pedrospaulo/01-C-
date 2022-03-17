#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

  int x, y, aux;
  int soma = 0;

  scanf("%d", &x);
  scanf("%d", &y);

  if(x > y){
    aux = y;
    y = x;
    x = aux;
  }
  for(int i = x; i <= y; i++){
    if(i%13 != 0){
      soma += i;
    }
  }
  printf("%d\n", soma);

  return 0;
}
