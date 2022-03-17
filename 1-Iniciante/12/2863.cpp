#include <stdio.h>

int main(){

    int n;
    float t, m;

    while(scanf("%d", &n) != EOF){
        m = 12;
        for(int i = 0; i < n; ++i){
            scanf("%f", &t);

            if(t < m){
                m = t;
            }
        }
        printf("%.2f\n", m);
    }
    return 0;
}
