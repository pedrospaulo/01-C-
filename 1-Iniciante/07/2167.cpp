#include <stdio.h>

int main(){
    int n;
    long int r[101];
    bool vel = true;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        scanf("%ld", &r[i]);
    }
    
    for(int i = 0; i < n-1; i++){

        if(r[i] > r[i + 1]){

            vel = false;
            printf("%d\n", i + 2);

            break;
        }
    }

    if(vel){
        printf("0\n");
    }

    return 0;
}
