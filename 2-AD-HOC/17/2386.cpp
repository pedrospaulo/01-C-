#include <stdio.h>

int main(){

    int a, n, f;
    int cont = 0;

    scanf("%d", &a);
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &f);
        if(a * f >= 40000000){
            cont++;
        }
    }
    printf("%d\n", cont);

    return 0;
}
