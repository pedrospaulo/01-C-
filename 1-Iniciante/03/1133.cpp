#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

  int x,y;
  int aux;

  scanf("%d", &x);
  scanf("%d", &y);

  if(y < x){
    aux = y;
    x = y;
    y = aux;
  }

  for(int i = x + 1; i < y; i++){
    if(i%5 == 2 || i%5 == 3){
      printf("%d\n", i);
    }
  }
  return 0;
}
