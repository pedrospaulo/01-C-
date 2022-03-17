#include <stdio.h>

int main(){

    int n, p, q;
    float v = 0.0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &p, &q);

        switch (p){
            case 1001:
                v += 1.50 * q;
                break;
            case 1002:
                v += 2.50 * q;
                break;
            case 1003:
                v += 3.50 * q;
                break;
            case 1004:
                v += 4.50 * q;
                break;
            case 1005:
                v += 5.50 * q;
                break;
            default:
                break;
        }
    }
    printf("%.2f\n", v);
    return 0;
}
