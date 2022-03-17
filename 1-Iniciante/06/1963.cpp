#include <stdio.h>
#include <math.h>

int main(){

    double a, b;

    scanf("%lf %lf", &a, &b);

    printf("%.2lf%c\n", (abs(b - a) * 100) / a, '%');

    return 0;

}
