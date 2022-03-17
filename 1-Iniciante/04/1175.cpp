#include <stdio.h>

int main(){

    int n[20], n1[20];

    for(int i = 0; i < 20; i++){
        scanf("%d", &n[i]);
    }

    for(int i = 0; i < 20; i--){
        n1[19 - i] = n[i];
    }

    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, n1[i]);
    }
    return 0;
}
