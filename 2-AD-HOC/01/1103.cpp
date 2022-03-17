#include <stdio.h>

int main(){

    int a, b, c, d;
    int i, f;

    while(true){
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(a == 0 && b == 0 && c == 0 && d == 0){
            break;
        }

        if(a == 0){
            i = (24*60) + b;
        }else{
            i = (a*60) + b;
        }

        if(c == 0){
            f = (24*60) + d;
        }else{
            f = (c*60) + d;
        }

        if(f > i){
            printf("%d\n", f-i);
        }else{
            printf("%d\n", 24*60 - (i-f));
        }
    }
    return 0;
}
