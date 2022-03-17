#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int n, m, p;
    char l;
    int par[10001][2]

    while(cin >> n != EOF){
        if(n%2 != 0){
            return 0;
        }
        for(int i = 0; i < n; i++){
            scanf("%d %c", &m, &l);
            if(l == "E"){
                p = 1;
            }else{
                p = 0;
            }
            par[i][0] = m; par[i][1] = p;
        }
        
    }
}
