#include <stdio.h>

int main(){
    int cc[250], eng[300], uniao[549];
    int i, j, k;
    int neng, ncc;

    i = 0;
    scanf("%d", &eng[i]);
    while(eng[i] != 0){
        i++;
        scanf("%d", &eng[i]);
    }
    neng = i;

    i = 0;
    scanf("%d", &cc[i]);
    while(cc[i] != 0){
        i++;
        scanf("%d", &cc[i]);
    }
    ncc = i;

    for(k = 0; k < neng; k++){
        uniao[k] = eng[k];
    }
    for(i = 0; i < ncc; i++){
        for(j = 0; j < neng && cc[i] != eng[j]; j++){}
        if(j == neng){
            uniao[k] = cc[i];
            k++;
        }
    }
    for(i = 0; i < k; i++){
        printf("%d\n", uniao[i]);
    }

    return 0;
}
