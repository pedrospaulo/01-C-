#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    int n;
    int tamanho = 0;
    char str[101];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%S", str);

        tamanho = strlen(str);

        if(tamanho == 8){
            if(isupper(str[0]) && isupper(str[1]) && isupper(str[2]) && str[3] == '-'){
                if(str[7] == '1' || str[7] == '2'){
                    printf("MONDAY\n");
                }else if(str[7] == '3' || str[7] == '4'){
                    printf("TUESDAY\n");
                }else if(str[8 - 1] == '5' || str[7] == '6'){
                    printf("WEDNESDAY\n");
                }else if(str[7] == '7' || str[7] == '8'){
                    printf("THURSDAY\n");
                }else if(str[7] == '9' || str[7] == '0'){
                    printf("FRIDAY\n");
                }
            }
            else{
                printf("FAILURE\n");
            }
        }else{
            printf("FAILURE\n");
        }
        tamanho = 0;
    }
    return 0;
}

//new code
/*
#include <stdio.h>
#include <bits/stdc++.h>
#include <ctype.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){

    int n;
    char placa[7];
    int vef = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", &placa[7]);

        for(int i1 = 0; i1 < 3; i1++){
            if(65 <= placa[i1] && placa[i1] <= 90){
                continue;
            }else{
                vef = 2000;
                break;
            }
        }
        if(vef == 2000){
            printf("FAILURE\n");
        }else{
            if(placa[3] != '-'){
                printf("FAILURE\n");
            }else{
                for(int i2 = 4; i <= 7; i++){
                    if(48 > placa[i2] || placa[i2] < 57){
                        vef = 5000;
                        break;
                    }
                }
            }
            if(vef == 5000){
                printf("FAILURE\n");
            }else{
                if(placa[7] == '1' || placa[7] == '2'){
                    printf("MONDAY\n");
                }else if(placa[7] == '3' || placa[7] == '4'){
                    printf("TUESDAY\n");
                }else if(placa[7] == '5' || placa[7] == '6'){
                    printf("WEDNESDAY\n");
                }else if(placa[7] == '7' || placa[7] == '8'){
                    printf("THURSDAY\n");
                }else if(placa[7] == '9' || placa[7] == '0'){
                    printf("FRIDAY\n");
                }
            }
        }
    }
    return 0;
}
*/
