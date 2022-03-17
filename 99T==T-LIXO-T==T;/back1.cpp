#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
    int casos;
    cin >> casos;
    int grid1[3][3], grid2[3][3], grid3[3][3], grid4[3][3], teste;
    bool chave = 0;
    for(int k6 = 0; k6 < casos; k6 ++){
        int auxx = 0, auxy = 0, cont, maior = 0;
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                cin >> grid1[i][j];
        grid2[0][0] = abs(grid1[0][0] - grid1[0][1]);
        grid2[0][1] = grid2[0][0];
        grid2[0][2] = abs(grid1[0][1] - grid1[0][2]);
        grid2[1][0] = abs(grid1[1][0] - grid1[1][1]);
        grid2[1][1] = grid2[1][0];
        grid2[1][2] = abs(grid1[1][1] - grid1[1][2]);
        grid2[2][0] = abs(grid1[2][0] - grid1[2][1]);
        grid2[2][1] = grid2[2][0];
        grid2[2][2] = abs(grid1[2][1] - grid1[2][2]);
        for(int k = 0; k < 9; k++){
            cont = 0;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(grid2[i][j] == grid2[auxx][auxy]){
                        cont++;
                    }
                }
            }
            if(maior < cont){
                maior = cont;
                teste = grid2[auxx][auxy];
            }
            auxy++;
            if(k == 2 || k == 5){
                auxy = 0;
                auxx++;
            }
        }
        grid3[0][0] = abs(grid1[0][0] - grid1[0][1]);
        grid3[0][1] = abs(grid1[0][1] - grid1[0][2]);
        grid3[0][2] = abs(grid1[0][2] - grid1[0][0]);
        grid3[1][0] = abs(grid1[1][0] - grid1[1][1]);
        grid3[1][1] = abs(grid1[1][1] - grid1[0][2]);
        grid3[1][2] = abs(grid1[1][2] - grid1[1][0]);
        grid3[2][0] = abs(grid1[2][0] - grid1[2][1]);
        grid3[2][1] = abs(grid1[2][1] - grid1[2][2]);
        grid3[2][2] = abs(grid1[2][2] - grid1[2][0]);
        grid4[0][0] = abs(grid1[0][0] - grid1[0][2]);
        grid4[0][1] = abs(grid1[0][1] - grid1[0][0]);
        grid4[0][2] = abs(grid1[0][2] - grid1[0][1]);
        grid4[1][0] = abs(grid1[1][0] - grid1[1][2]);
        grid4[1][1] = abs(grid1[1][1] - grid1[0][0]);
        grid4[1][2] = abs(grid1[1][2] - grid1[1][1]);
        grid4[2][0] = abs(grid1[2][0] - grid1[2][2]);
        grid4[2][1] = abs(grid1[2][1] - grid1[2][0]);
        grid4[2][2] = abs(grid1[2][2] - grid1[2][1]);
        cout << "Possiveis maletas: ";
        chave = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if((grid2[i][j] != teste) && (grid3[i][j] != teste) && (grid4[i][j] != teste) ){
                    if(chave == 1){
                        cout << ", ";
                    }
                    cout << grid1[i][j];
                    chave = 1;
                }
                if(i == 2 && j == 2){
                    cout << ";" << endl;
                }
                //printf("%d%c%c", grid1[i][j] ,  (grid2[i][j] != teste)&& (grid3[i][j] != teste) && (grid4[i][j] != teste) ? ',' : ';', i < 2 && j < 2 ? ' ' : '\n');

            }
        }

        casos--;
    }

    return 0;
}
