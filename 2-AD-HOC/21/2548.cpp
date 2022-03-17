#include <stdio.h>

int main(){
    int n, m, o, soma;
    int vel;
    int vet[1001];

    while(scanf("%d", &n) != EOF){
        scanf("%d", &m);

        vel = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &o);

            for(int j = 0; j < m; j++){
                if(o > vel){
                    vet[j] = o;
                }
            }
            soma = 0;
            for(int j = 0; j < m; j++){
                soma += vet[j];
            }
        }
        printf("%d\n", m > 1 ? soma - 1 : soma );
    }
    return 0;
}
