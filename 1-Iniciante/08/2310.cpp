#include <stdio.h>

int main(){

    int n;
    char nome[101];
    double s, s1, b, b1, a, a1;
    double ts=0 , ts1=0 , tb=0 , tb1=0 , ta=0 , ta1=0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", nome);
        scanf("%lf %lf %lf", &s, &b, &a);
        ts += s; tb += b; ta += a;
        scanf("%lf %lf %lf", &s1, &b1, &a1);
        ts1 += s1; tb1 += b1; ta1 += a1;
    }
    printf("Pontos de Saque: %.2lf %%.\n", ts1/ts * 100);
    printf("Pontos de Bloqueio: %.2lf %%.\n", tb1/tb * 100);
    printf("Pontos de Ataque: %.2lf %%.\n", ta1/ta * 100);

    return 0;

}
