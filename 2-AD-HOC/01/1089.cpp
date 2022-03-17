#include <stdio.h>

int main (){

    int n, i, m[3], result, h, hi;

    while(1){

        scanf("%d", &n);
        if(n == 0){
            break;
        }

        result = 0;

        scanf("%d %d", &m[0], &m[1]);
        if(n == 2){
            if(m[0] != m[1]){
                result = 2;
            }
        }else{
            h = m[0];
            hi = m[1];



            for(i = 2; i < n; i++){
                scanf("%d", &m[2]);

                if(((m[1] > m[0]) && (m[1] > m[2])) || ((m[1] < m[0]) && (m[1] < m[2]))){
                    ++result;
                }

                m[0] = m[1];
                m[1] = m[2];
            }

            if((h > hi && h > m[2]) || (h < hi && h < m[2])){
                result++;
            }
            if((m[2] > m[0] && m[2] > h) || (m[2] < m[0] && m[2] < h)){
                result++;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}
