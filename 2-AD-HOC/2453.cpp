#include <stdio.h>
#include <string.h>

#define MAX 1000

int main(){

    char frase[MAX];
    int i, val;

    fgets(frase, MAX, stdin);

    for(i = 0; frase[i] >= 32; i++){}

    frase[i] = '\0';

    for(i = 0, val = 1; frase[i] != '\0'; i++){
        if(frase[i] == 'p' && val){
            val = 0;
        }else{
            printf("%c", frase[i]);
            val = 1;
        }
    }
    printf("\n");

    return 0;
}
