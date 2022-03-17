/*
#include <iostream>

using namespace std;

int main(){

    int n;
    long long int tio[100] = {0,1,1,1,2,2,4,8,12,96,108,10368,10476,1086151,1086625644,11798392572168192,11798392680793836};

    while(cin >> n){

        cout << tio[n-1] << endl;
    }
    return 0;
}*/

#include <stdio.h>

int main(){
    int n;
    long long tio[101];

    scanf("%d", &n);
    while(1 <= n && n <= 17){
        tio[0] = 0;
        tio[1] = 1;

        for(int i = 2; i < n; i++){
            if(i%2 == 0){
                tio[i] = tio[i-1] + tio[i-2];
            }else{
                tio[i] = tio[i-1] * tio[i-2];
            }
        }
        printf("%lld\n", tio[n-1]);
        scanf("%d", &n);
    }
    return 0;
}
