#include <stdio.h>
#include <string.h>

int main(){

    int n, nu;
    char no[101];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %d", no, &nu);
        if(strcmp(no, "Thor")){
            printf("N\n");
        }else{
            printf("Y\n");
        }
    }
    return 0;
}
