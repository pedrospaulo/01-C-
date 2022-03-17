#include <stdio.h>

int main(){

    int n, t ;
    int cont = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);

        if(t != 1){
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}
