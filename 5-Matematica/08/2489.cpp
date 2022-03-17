#include <stdio.h>
#include <math.h>

int main(){
    double h, d, a;
    double pi = 3.14159;

    while(scanf("%lf %lf %lf", &h, &d, &a) != EOF){
        printf("%.4lf\n", h + tan((a - 90.0f) * (pi/180.0f)) * d);
    }
    return 0;
}
