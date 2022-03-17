#include <stdio.h>

int main(){

  int a, b, c;
  int aux;

  scanf("%d %d %d", &a, &b, &c);

  if(a < b || a < c){
    if(b < c){
      aux = a;
      a = c;
      c = aux;
    }else{
      aux = a;
      a = b;
      b = aux;
    }
  }
  if(b < c){
    aux = b;
    b = c;
    c = aux;
  }

  if(a + b > c && a + c > b && b + c > a){
    if((a * a) == ((b * b)+(c * c))){
      printf("r\n");
    }else if((a * a) < ((b * b)+(c * c))){
      printf("a\n");
    }else{
      printf("o\n");
    }
  }else{
    printf("n\n");
  }
  return 0;
}
