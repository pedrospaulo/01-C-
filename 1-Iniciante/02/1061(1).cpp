#include <bits/stdc++.h>

using namespace std;

int main(){

    int di = 0, hi = 0, mi = 0, si = 0;
    int df = 0, hf = 0, mf = 0, sf = 0;
    unsigned long long tempo;
    char DI[4], PI[2], DF[4], PF[2];

    cin.get(DI, 4); cin>>di;
    scanf("%d %c %d %c %d", &hi, &PI[0], &mi, &PI[1], &si);
    cin.get(DF, 4); cin>>df;
    scanf("%d %c %d %c %d\n", &hf, &PF[0], &mf, &PF[1], &sf);

    tempo = (df*86400 + hf*3600 + mf*60 + sf) - (di*86400 + hi*3600 + mi*60 + si);

    printf("%llu dia(s)\n", tempo/86400);
    printf("%llu hora(s)\n", (tempo%86400)/3600);
    printf("%llu minuto(s)\n", ((tempo%86400)%3600)/60);
    printf("%llu segundo(s)\n", ((tempo%86400)%3600)%60);

    return 0;
}
