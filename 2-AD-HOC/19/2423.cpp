#include <stdio.h>

int main(){
  int a, b, c;
  int f, o, l;

  scanf("%d %d %d", &a, &b, &c);

  f = a / 2;
  o = b / 3;
  l = c / 5;

  if(f <= o && f <= l){
    printf("%d\n", f);
  }else if(o <= l && o <= f){
    printf("%d\n", o);
  }else{
    printf("%d\n", l);
  }

  return 0;
}
