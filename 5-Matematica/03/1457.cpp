/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long long int kfat, qk, tns, tam, t, nu;
    char srt[101], num[101];

    scanf("%lld", &t);//lendo o numero de casos
    for(int i = 0; i < t; i++){//repetindo o numero de casos
        scanf("%s", srt);//lendo o vetor de char (numero+!!)

        tns = 0;//todos os numeros da string
        qk = 0;//quantidade de '!' na string

        for(int j = 0; srt[j] != '\0'; j++){//lendo a string
            if(srt[j] != '!'){//apenas se a string for diferente '!'
                num[tns] = srt[j];//separando os numeros
                tns++;//andando um na string de numero
            }
            if(srt[j] == '!'){//apenas as '!'
                qk++;//contando o numero de '!'
            }
        }
        num[tns] = '\0';//fechando o tamanho da string num

        nu = atoi(num);//convertendo a string para int
        kfat = 1;//add um valor nulo para a multiplicaçã

        for(int y = 0; y < t; y++){//fazendo o kfat
            if(t - (y * qk) >= 1){//verificando a condição de existencia
                kfat = kfat * (t - (y * qk));//realizando o kfat
            }else{
                break;
            }
        }
        printf("%lld\n", kfat);
    }
    return 0;
}
*/




#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){


    long long int fat;
    long long int k, qtdk, i, j, tam, t, n, x;
    char cadeia[101], num[101];

    scanf("%lld", &t);
    for (i = 0; i < t; i++){
        scanf("%s", cadeia);

        x = 0;
        qtdk = 0;
        for (j = 0; cadeia[j] != '\0'; j++){
            if (cadeia[j] != '!'){
               num[x] = (cadeia[j]);
               x++;
            }
            if (cadeia[j] == '!'){
               qtdk++;
            }
        }
        num[x] = '\0';

        n = atoi(num);
        fat = 1;
        for (j = 0; j < n; j++){
            if (n - (j * qtdk) >= 1){
               fat = fat * (n - (j * qtdk));
            }
            else{
                 break;
            }
        }
        printf("%lld\n", fat);
    }

    return 0;
}
