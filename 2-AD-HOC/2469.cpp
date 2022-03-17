#include <stdio.h>
#include <iostream>

#define MAX 150

int main(){

    int n, nt, repet, maior, notas[MAX];

    scanf("%d", &n);

    for(int i = 0; i <= MAX; i++){
        notas[i] = 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &nt);
        notas[nt]++;
    }

    repet = 0;
    for(int i = 0; i < MAX; i++){
        if(notas[i] >= repet){
            repet = notas[i];
            maior = i;
        }
    }
    printf("%d\n", maior);

    return 0;
}
