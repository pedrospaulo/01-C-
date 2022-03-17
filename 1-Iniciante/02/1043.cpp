#include <stdio.h>
#include <math.h>

int main (){

  float a, b, c;
  float x, y, z;

  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);

  if (b - a < 0){
    x = a - b;
  }else{
    x = b - a;
  }
  if (b - c < 0){
    y = c - b;
  }else{
    y = b - c;
  }
  if (a - c < 0){
    z = c - a;
  }else{
    z = a - c;
  }


  if (y < a && a < (b + c) && x < c && c < (a+b) && z < b && b < (a + c)){
    printf("Perimetro = %.1f\n", a+b+c);
  }else{
    printf("Area = %.1f\n", ((a + b) * c) / 2.0);
  }

  return 0;
}
