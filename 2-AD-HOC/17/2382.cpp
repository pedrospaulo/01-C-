#include <stdio.h>
#include <math.h>

int main(){

  int l, h, p, r;
  int d, c;

  scanf("%d %d %d %d", &l, &h, &p, &r);

  d = sqrt((l*l)+(h*h)+(p*p));
  c = r + r;

  if(d <= c){
    printf("S\n");
  }else{
    printf("N\n");
  }

  return 0;
}
