#include <stdio.h>

int main (){


  int x, y, aux;

  scanf("%d", &x);


  if(x%2 == 0){
    for (y = x + 1; y <= x + 11; y = y + 2){
      printf("%d\n", y);
    }
  }else{
    for (aux = x; aux <= x + 10; aux = aux + 2){
      printf("%d\n", aux);
    }
  }

  return 0;
}
