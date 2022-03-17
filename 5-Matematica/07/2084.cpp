#include <stdio.h>

int main(){

    int ncand, scd, total;
    int fts = 0;
    int votos;
    float qcinco, qzero, dez, dif;

    scanf("%d", &ncand);
    for(int i = 0; i < ncand; i++){
        scanf("%d", &votos);
            if(votos > fts){
                scd = fts;
                fts = votos;
            }else if(votos > scd){
                scd = votos;
            }
            total += votos;
    }
    qcinco = (45*total*1.00f) / 100.00f;
    qzero = (40*total*1.00f) / 100.00f;
    dez = (10*total*1.00f) / 100.00f;

    dif = total - fts;

    if(fts >= qcinco){
        printf("1\n");
    }else if(fts >= qzero && dif >= dez){
        printf("1\n");
    }else{
        printf("2\n");
    }
    return 0;
}
