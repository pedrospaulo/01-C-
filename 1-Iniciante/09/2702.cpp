#include <stdio.h>

int main(){

    int a, b, c, x, y, z;
    int cont = 0;

    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);

    if(a < x){
        cont += x - a;
    }
    if(b < y){
        cont += y - b;
    }
    if(c < z){
        cont += z - c;
    }

    printf("%d\n", cont);

    return 0;
}
