#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int n, m, i, val;

    while(scanf("%d", &n) != EOF){

        int lista[n];

        for(i = 0; i < n; i++){
            scanf("%d", &lista[i]);
        }

        scanf("%d", m);
        bool y = true;
        val = 1;
        while(y){
            for(i = 1; i < n; i = i + val){
                lista[i] = 0;
            }
            val++;
            if(1 + val > n){
                y = false;
            }
        }
        for(i = 0; i < n && m != lista[i]; i++){}

        if(i == n){
            printf("N\n");
        }else{
            printf("Y\n");
        }
    }
    return 0;
}

/*for(i = 1; val >= i && i < lim && x; i++){
    if(val % i == 0){
        x = false;
    }
    val -= val / i;
}*/
