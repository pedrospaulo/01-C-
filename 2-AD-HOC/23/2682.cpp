#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    bool val = false;
    int x;
    int erro = 0;

    while(cin >> x){
        if(erro < x && !val){
            erro = x;
        }else{
            val = true;
        }
    }

    printf("%d\n", erro + 1);
    return 0;
}
