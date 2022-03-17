/*#include <stdio.h>
#include <math.h>

int main(){

  double a, b, c, dt;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  dt = ((b * b) - (4 * a * c);

  if (dt < 0){
    printf("Impossivel calcular\n");
  }else if (dt == 0 && dt > 0){
    printf("R1 = %.5lf", ((-b) + sqrt(dt))/(2 * a));
    printf("R2 = %.5lf", ((-b) + sqrt(dt))/(2 * a));
  }

  return 0;
}*/
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    double a, b, c;

    cin >> a >> b >> c;

    if((b*b) - (4*a*c) < 0 || 2 * a == 0){
        printf("Impossivel calcular\n");
    }else{
         printf("R1 = %.5lf\n",((-b) + sqrt(((b*b) - 4*a*c)))/(2*a));
         printf("R2 = %.5lf\n",((-b) - sqrt(((b*b) - 4*a*c)))/(2*a));
         }

    return 0;
}
