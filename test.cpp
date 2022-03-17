#include <stdio.h>

int main(){

    int mat[61];
    int notas[61];
    int cont = 0;
    int mati, nota;
    int i = 0 , j = 0;

    printf("Lançamentos de Notas\n\nPara parar digite 0\n\n");

    for(j = 0; j < 60; j++){
        printf("Digite a matricula:  ");
        scanf("%d", &mati);
        mat[j] = mati;

        if(mat[j] == -1){
            break;
        }
        printf("Digite a nota:  ");
        scanf("%d", &nota);
        notas[j] = nota;

        cont++;
    }

    printf("\n\n\n");


    while(true){

        printf("Para parar de procurar digite 0\n");
        printf("Digite a matricula do aluno para ver a nota:  ");

        scanf("%d", &mati);

        if(mati == 0){
            break;
        }

        for(i = 0; i < cont && mati != mat[i]; i++){}

        if(i < cont){
            printf("matricula nao exite");
        }else{
            printf("%d\n", notas[i-2]);
        }


    }
    return 0;
}
