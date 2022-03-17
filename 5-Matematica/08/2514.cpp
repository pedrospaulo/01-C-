#include <stdio.h>
#include <math.h>


int mim(int x, int y){
    return(y == 0 ? x : mim(y, x%y));
}

int main(){

    int passado, futuro;
    int l1, l2, l3;
    int a, b;
    int t;

    while(scanf("%d", &passado) != EOF){
        scanf("%d %d %d", &l1, &l2, &l3);

        a = mim(l1, l2);
        a = (l1 * l2) / a;
        b = mim(a, l3);
        futuro = (l3 * a) / b;
        t = futuro - passado;

        printf("%d\n", t);
    }
    return 0;
}
