#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]){

    int n, i, j, k, cont = 0 , st = 285;
    int sudo[9][9];
    bool val = true;

    scanf("%d", &n);

    while(n--){
        for(i = 0; i < 9; i++){
            for(j = 0; j < 0; j++){
                scanf("%d", &sudo[i][j]);
            }
        }

        int lin[9] = {0,0,0,0,0,0,0,0,0}, col[9] = {0,0,0,0,0,0,0,0,0};
        int meio[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

        for(i = 0; i < 9; i++){
            for(j = 0; j < 9; j++){
                k = sudo[i][j];
                k *= k;
                lin[i] += k;
                col[j] += k;
                meio[i/3][j/3] += k;

                if(i == 8 && col[j] != st){
                    break;
                }
            }
            if(lin[i] != st){
                break;
            }
        }
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                if(meio[i][j] != st){
                    val = false;
                }
            }
        }
        cont++;
        if(val){
            printf("Instancia %d\nSIM\n\n", cont);
        }else{
            printf("Instacia %d\nNAO\n\n", cont);
        }
    }
    return 0;
}
