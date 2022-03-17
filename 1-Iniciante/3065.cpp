#include<bits/stdc++.h>

using namespace std;


int main (){

    int n, cont = 0 , i, j;
    char oper[200];
    int soma;

    scanf("%d", &n);
    while(n != 0){
        soma = 0;
        cont++;
        for(i = 0; i < n + (n-1); i++){
            scanf("%c", &oper[i]);
        }

        if(strcmp(oper[1], "+" == 0)){
            soma = (oper[0] - 48) + (oper[2] - 48);
        }else{
            soma = (oper[0] - 48) - (oper[2] - 48);
        }

        for(j = 3; j < i -1; j=j+2){
            if(strcmp(oper[j] , "+" == 0)){
                soma += oper[j+1] - 48;
            }else{
                soma -= oper[j+1] - 48;
            }
        }

        printf("Teste %d\n", cont);
        printf("%d\n\n", soma);

        scanf("%d", &n);
    }
    return 0;
}
