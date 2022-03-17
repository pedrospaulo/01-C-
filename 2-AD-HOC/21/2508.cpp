#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int atr(char lt){
    if(lt == 'A' or lt == 'J' or lt == 'S'){
        return 1;
    }else if(lt == 'B' or lt == 'K' or lt == 'T'){
        return 2;
    }else if(lt == 'C' or lt == 'L' or lt == 'U'){
        return 3;
    }else if(lt == 'D' or lt == 'M' or lt == 'V'){
        return 4;
    }else if(lt == 'E' or lt == 'N' or lt == 'W'){
        return 5;
    }else if(lt == 'F' or lt == 'O' or lt == 'X'){
        return 6;
    }else if(lt == 'G' or lt == 'P' or lt == 'Y'){
        return 7;
    }else if(lt == 'H' or lt == 'Q' or lt == 'Z'){
        return 8;
    }else if(lt == 'I' or lt == 'R'){
        return 9;
    }
}

int one(int s){
    int n = 0;
    while(s != 0){
        n += s % 10;
        s /= 10;
    }
    return n;
}


int main(){

    std :: string nome;
    int soma;

    while(getline(std :: cin, nome)){

        transform(nome.begin(), nome.end(), nome.begin(), ::toupper);

        soma = 0;

        for(int i = 0; i < nome.size(); i++){
            if(nome[i] != ' '){
                soma += atr(nome[i]);
            }
        }
        while(soma > 9){
            soma = one(soma);
        }
        printf("%d\n", soma);
    }
     return 0;
}
