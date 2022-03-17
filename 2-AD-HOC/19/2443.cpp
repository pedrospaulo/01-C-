/*
#include <stdio.h>
#include <math.h>
int main(){
  int a, b, c, d;
  int v1, v2, mdc, dividendo, divisor;
  int num[4] = {2, 3, 5, 7};
  int con = 1;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  v1 = (a*d) + (b*c);
  v2 = b*d;
/*  for(int i = 0; i < 4; i++){
    while(v1 % num[i] == 0 && v2 % num[i] == 0){
      con *= num[i];
      mdc /= num[i];
    }
  }
*/
/*  if(v1%v2 != 0){
    int h = v1;
    int t = v2;
    mdc = h%t;
      while(h%t == 0){
        h = t;
        t = mdc;
        mdc = h%t;
      }
    mdc = t;
    }else{
      mdc = 1;
  }*//*
  printf("%d\n\n\n", mdc);
  printf("%d %d\n", v1 / mdc, v2 / mdc);
  return 0;
}
*/
//peguei http://muitomaiscodigoss.blogspot.com/
// 2018/04/uri-problema-2443-soma-de-fracoes.html

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
 int num;
 int den;
}Fracao;

Fracao somaRac(Fracao, Fracao);
Fracao simplificaRac(Fracao);

int main(){
    Fracao f1, f2, res;

    scanf("%d %d %d %d", &f1.num, &f1.den, &f2.num, &f2.den);

    res = somaRac(f1, f2);
    res = simplificaRac(res);

    printf("%d %d\n", res.num, res.den);

    return 0;
}

int mdc(int m, int n){
 if (m < 0) m = -m;
 if (n < 0) n = -n;

 if (m % n == 0)
  return n;
 else
  return mdc(n, m % n);
}

Fracao somaRac(Fracao n1, Fracao n2){
 Fracao res;
    res.num = n1.num * n2.den + n2.num * n1.den;
 res.den = n1.den * n2.den;

 return res;
}

Fracao simplificaRac(Fracao x){
 Fracao res;
    res.num = x.num/mdc(x.num, x.den);
 res.den = x.den/mdc(x.num, x.den);

 return res;
}
