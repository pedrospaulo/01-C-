#include <stdio.h>

int main(){

    int n, t, v;
    int d = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){

        scanf("%d %d", &t, &v);
        d = d + (t * v);
    }
    printf("%d\n", d);

    return 0;
}
