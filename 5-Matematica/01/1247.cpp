#include <stdio.h>
#include <math.h>

int main(){

     float vf, vg, d;
     float hip;

     while(scanf("%f", &d) != EOF){
        scanf("%f", &vf);
        scanf("%f", &vg);

        hip = sqrt(d*d + 144);

        if(hip/vg <= 12/vf){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }
     return 0;
}
