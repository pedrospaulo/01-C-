#include <stdio.h>
#include <math.h>

/*int main(){

  int a, b, c, d, e;
  int par = 0;


  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);

  if(a%2 == 0){
    par++;
  }else if(b%2 == 0){
    par++;
  }else if(c%2 == 0){
    par++;
  }else if(d%2 == 0){
    par++;
  }else if(e%2 == 0){
    par++;
  }

  printf("%d valores pares\n", par);

  return 0;
}*/


int main (){

  int a, i;
  int par = 0;

  for (i = 0; i < 5; i++){
    scanf("%d", &a);
    if(a<0){
      a = -a;
    }
    if (a%2 == 0){
      par++;
    }
  }

  printf("%d valores pares\n", par);

  return 0;
}
