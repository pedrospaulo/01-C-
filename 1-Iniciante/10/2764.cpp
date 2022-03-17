#include <stdio.h>

int main (){

  int d, m, a;
  char b1, b2;

  scanf("%d %c %d %c %d", &d, &b1, &m, &b2, &a);

  //MM/DD/AA
  if(m < 10){
    printf("0");
  }
  printf("%d/",m);
  if(d < 10){
    printf("0");
  }
  printf("%d/",d);
  if(a < 10){
    printf("0");
  }
  printf("%d\n", a);

  //AA/MM/DD
  if(a < 10){
    printf("0");
  }
  printf("%d/", a);
  if(m < 10){
    printf("0");
  }
  printf("%d/",m);
  if(d < 10){
    printf("0");
  }
  printf("%d\n",d);

  //DD-MM-AA
  if(d < 10){
    printf("0");
  }
  printf("%d-",d);
  if(m < 10){
    printf("0");
  }
  printf("%d-",m);
  if(a < 10){
    printf("0");
  }
  printf("%d\n", a);



  return 0;
}


/*
  if(d < 10 && m < 10 && a < 10){
    printf("0%d%c0%d%c0%d\n", m, b1, d, b2, a);
    printf("0%d%c0%d%c0%d\n", a, b1, m, b2, d);
    printf("0%d-0%d-0%d\n", d, m, a);
  }else if(m < 10 && a < 10){
    printf("0%d%c%d%c0%d\n", m, b1, d, b2, a);
    printf("0%d%c0%d%c%d\n", a, b1, m, b2, d);
    printf("%d-0%d-0%d\n", d, m, a);
  }else if(d < 10 && a < 10){
    printf("%d%c0%d%c0%d\n", m, b1, d, b2, a);
    printf("0%d%c%d%c0%d\n", a, b1, m, b2, d);
    printf("0%d-%d-0%d\n", d, m, a);
  }else if(d < 10 && m < 10){
    printf("0%d%c0%d%c%d\n", m, b1, d, b2, a);
    printf("%d%c0%d%c0%d\n", a, b1, m, b2, d);
    printf("0%d-0%d-%d\n", d, m, a);
  }else if(a < 10){
    printf("%d%c%d%c0%d\n", m, b1, d, b2, a);
    printf("0%d%c%d%c%d\n", a, b1, m, b2, d);
    printf("%d-%d-0%d\n", d, m, a);
  }else if(m < 10){
    printf("0%d%c%d%c%d\n", m, b1, d, b2, a);
    printf("%d%c0%d%c%d\n", a, b1, m, b2, d);
    printf("%d-0%d-%d\n", d, m, a);
  }else if(d < 10){
    printf("%d%c0%d%c%d\n", m, b1, d, b2, a);
    printf("%d%c%d%c0%d\n", a, b1, m, b2, d);
    printf("0%d-%d-%d\n", d, m, a);
  }else{
    printf("%d%c%d%c%d\n", m, b1, d, b2, a);
    printf("%d%c%d%c%d\n", a, b1, m, b2, d);
    printf("%d-%d-%d\n", d, m, a);
  }*/
