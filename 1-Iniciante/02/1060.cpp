#include <stdio.h>
#include <math.h>
#include <iostream>

int main (){

  float a, b, c, d, e, f;

  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);
  scanf("%f", &e);
  scanf("%f", &f);

  int num = 0;

  if (a > 0.0) num++;
  if (b > 0.0) num++;
  if (c > 0.0) num++;
  if (d > 0.0) num++;
  if (e > 0.0) num++;
  if (f > 0.0) num++;

  printf("%d valores positivos\n", num);


  return 0;
}
