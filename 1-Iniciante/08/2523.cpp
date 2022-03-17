#include <stdio.h>

int main(){

    int n, l;
    char lt[27];

    while(scanf("%s", lt) != EOF){
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%d", &l);
            printf("%c", lt[l-1]);
        }
        printf("\n");
    }
    return 0;
}
