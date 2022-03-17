#include <stdio.h>

int main(){

    int n, m, m2, m3, m4, m5;

    scanf("%d", &n);
    m2 = 0;
    m3 = m2;
    m4 = m3;
    m5 = m4;
    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        if(m%2 == 0){
            m2++;
        }
        if(m%3 == 0){
            m3++;
        }
        if(m%4 == 0){
            m4++;
        }
        if(m%5 == 0){
            m5++;
        }
    }
    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);

    return 0;
}
