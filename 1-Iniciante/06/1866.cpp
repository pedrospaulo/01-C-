#include <stdio.h>
#include <math.h>

int main(){

    int n, c;

    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        scanf("%d", &n);

        if(n%2 == 0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
    return 0;
}
