#include <stdio.h>
#include <math.h>

int main(){

  long int a, b, c;
  long int x, y, z;
  long int vc, vn;

  scanf("%ld %ld %ld", &a, &b, &c);
  scanf("%ld %ld %ld", &x, &y, &z);

  printf("%ld\n", (x/a)*(y/b)*(z/c));

  return 0;
}
