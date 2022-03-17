#include <stdio.h>

int main(){

    int n, l, c, q = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &l, &c);

        if(l > c){
            q += c;
        }
    }
    printf("%d\n", q);
    return 0;
}
