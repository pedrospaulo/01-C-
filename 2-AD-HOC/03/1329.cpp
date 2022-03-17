#include <stdio.h>

int main(){

    int n, c, joao, maria;

    while(scanf("%d", &n)){

        if(n == 0){
            break;
        }
        
        joao = 0;
        maria = joao;

        for(int i = 0; i < n; i++){

            scanf("%d", &c);

            if(c == 0){
                maria++;
            }else{
                joao++;
            }
        }
        printf("Mary won %d times and John won %d times\n", maria, joao);
    }
    return 0;
}
