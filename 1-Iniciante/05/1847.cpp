#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(){

    int a, b, c;
    bool smile;

 	smile = FALSE;
    scanf("%d %d %d" , &a, &b, &c);
    
    if(b == a){
        if(b < c){
            smile = TRUE;
        }else{
            smile = FALSE;
        }
    }else if(a > b){//caiu do 1 para o 2 dia
        if(b - c >= a - b){
            smile = FALSE;
        }else{
            smile = TRUE;
        }
    }else{
 	      if(c - b >= b - a){
              smile = TRUE;
 	      }else{
              smile = FALSE;
          }
    }
    if(smile){
        printf(":)\n");
    }else{
        printf(":(\n");
    }

    return 0;
}
