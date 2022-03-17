#include<stdio.h>

int main(){

    int t, n, soma;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        soma = 1;
        scanf("%d", &n);
        for(int j = 1; j <= n; j++){
            soma = soma * 2;
        }
        printf("%d\n", soma - 1);
    }
    return 0;
}
