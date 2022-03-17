#include <stdio.h>
#include <string.h>

int main(){

  int n, p, q;
  char op;

  scanf("%d", &n);

  scanf("%d %c %d", &p, &op, &q);

  if(op == '+'){
    if(p + q > n){
      printf("OVERFLOW\n");
    }else{
      printf("OK\n");
    }
  }
  if(op == '*'){
    if(p * q > n){
      printf("OVERFLOW\n");
    }else{
      printf("OK\n");
    }
  }


  return 0;

}
