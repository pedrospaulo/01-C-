/*
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){

  int n;
  float gd, aux, aux1, media;
  float nt, n1,n2,n3,n4,n5;
  char nome[32];


  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%s", &nome[32]);
    scanf("%f", &gd);

    n1 = 10;
    n5 = 0;
    for(int i1 = 0; i1 < 7; i++){
      scanf("%f", &nt);

      if(nt < n1 && nt > n5){
        aux = n1;
        n1 = nt;
        aux1 = n2;
        n2 = aux;
        aux = n3;
        n3 = aux1;
        aux1 = n4;
        n4 = aux;
        n5 = aux1;
      }
    }
    media = (n1 + n2 + n3 + n4 + n5)*gd;
    printf("%s %.2f", nome, media);

  }

  return 0;
}
*/

#include <stdio.h>

int main(){
  int n, i, j;
  char name[1000];
  double dif, score;

  scanf("%d", &n);
  for(i=1; i<=n; i++){
    double max = -10.00, min = 100.00, ans = 0.00;
    scanf("%s", name);
    scanf("%lf", &dif);

    for(j=1; j<=7; j++){
      scanf("%lf", &score);

      if(score > max){
        max = score;
      }
      if(score < min){
        min = score;
      }

      ans += score;
    }

    ans -= (max+min);
    ans *= dif;
    printf("%s %.2lf\n", name, ans);
  }
  return 0;
}
