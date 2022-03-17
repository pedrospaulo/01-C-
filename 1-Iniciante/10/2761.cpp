#include <stdio.h>
#include <string.h>

int main(){

    int a;
    float b;
    char l;
    char pa[51];

    scanf("%d %f %c %[^\n]", &a ,&b, &l, pa);

    printf("%d%.6f%c%s", a, b, l, pa);
    printf("%d\t%.6f\t%c\t%s\n", a, b, l, pa);
    printf("%10d%10.6f%10c%10s\n", a, b, l, pa);

    return 0;
}
