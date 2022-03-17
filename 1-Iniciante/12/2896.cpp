#include <stdio.h>
#include <math.h>

int main(){

    int t, n, k;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d", &n, &k);

        printf("%d\n", (n%k)+(n/k));
    }
    return 0;
}
