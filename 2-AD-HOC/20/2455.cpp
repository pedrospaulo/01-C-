#include <stdio.h>

int main(){

    int p1, c1, p2, c2;
    int left, right;

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    left = p1 * c1;
    right = p2 * c2;

    if(left == right){
        printf("0\n");
    }else if(left > right){
        printf("-1\n");
    }else if(left < right){
        printf("1\n");
    }
    return 0;
}
