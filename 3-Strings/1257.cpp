#include <bits/stdc++.h>

int main(){

    int n, l;
    char letra[51];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){

        scanf("%d", &l);

        int soma = 0;
        for(int j = 0; j < l; j++){

            scanf("%s", letra);

            for(int k = 0; k < strlen(letra); k++){
                soma += k + j + ((int)letra[k] - 65);
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}
