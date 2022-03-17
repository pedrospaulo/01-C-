#include <stdio.h>

int main(){

    int n;
    int lt;
    char vet[1001];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", vet);

        int j = 0;
        lt = 0;

        while(true){
            if(vet[j] == '\0'){
                break;
            }else if(vet[j] == '1'){
                lt += 2;
            }else if(vet[j] == '2'){
                lt += 5;
            }else if(vet[j] == '3'){
                lt += 5;
            }else if(vet[j] == '4'){
                lt += 4;
            }else if(vet[j] == '5'){
                lt += 5;
            }else if(vet[j] == '6'){
                lt += 6;
            }else if(vet[j] == '7'){
                lt += 3;
            }else if(vet[j] == '8'){
                lt += 7;
            }else if(vet[j] == '9'){
                lt += 6;
            }else if(vet[j] == '0'){
                lt += 6;
            }
            j++;
        }
        printf("%d leds\n", lt);
    }
    return 0;
}
