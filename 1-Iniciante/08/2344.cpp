#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    if(n == 0){
        printf("E\n");
    }else if(1 <= n && n <= 35){
        printf("D\n");
    }else if(36 <= n && n <= 60){
        printf("C\n");
    }else if(61 <= n && n <= 85){
        printf("B\n");
    }else if(86 <= n && n <= 100){
        printf("A\n");
    }

    return 0;
}
