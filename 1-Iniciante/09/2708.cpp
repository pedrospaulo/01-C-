#include <stdio.h>
#include <string.h>

int main(){

    char nome[7];
    unsigned int n, p = 0 , cont = 0;
    bool x = true;

    while(x == true){
        scanf(" %[A-Z]", &nome);
        if(nome[0] == 'S'){
            scanf("%u", &n);
            p += n;
            cont++;
        }else if(nome[0] == 'V'){
            scanf("%u", &n);
            p -= n;
            cont--;
        }else if(nome[0] = 'A'){
            x = false;
            printf("%u\n" "%u\n", p, cont);
            break;
        }
    }
    return 0;
}
