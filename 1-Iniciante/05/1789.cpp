#include <stdio.h>

int main(){

    int n, v, mv;

    while(scanf("%d", &n) != EOF){
        mv = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &v);
            if(v > mv){
                mv = v;
            }
        }
        if(mv < 10){
            printf("1\n");
        }else if(mv >= 10 && mv < 20){
            printf("2\n");
        }else{
            printf("3\n");
        }
    }
    return 0;
}
