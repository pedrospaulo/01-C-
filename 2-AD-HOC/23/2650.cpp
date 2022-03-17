#include <stdio.h>
#include <string.h>

int main(){

    char titan[101];
    unsigned int qtd, hm, tam;
    unsigned short ht;

    scanf("%u %u", &qtd, &hm);

    for(int i = 0; i < qtd; i++){
        scanf(" %[a-z A-Z] %hu", &titan, &ht);
        tam = strlen(titan);

        if(hm < ht){
            titan[tam - 1] = 0;
            printf("%s\n", titan);
        }
    }
    return 0;
}
