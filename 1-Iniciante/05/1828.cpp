/*
#include <stdio.h>
#include <string.h>

int main(){
  //variavel e outras de apoio
  int a, b, c;
  //vetores com os nomes
  char v1[] = "tesoura", v2[] = "papel", v3[] = "pedra", v4[] = "largato", v5[] = "Spock";
  //vetores de valores
  char v6[10], v7[10];




  return 0;
}

  */

#include <stdio.h>
#include <string.h>


void B(){printf("Bazinga!\n");}

void T(){printf("Raj trapaceou!\n");}


int main() {


  char a[10],b[10];
  int c=0,t;

  scanf("%d",&t);
  if(t<1||t>100){
    return main();
  }else{
      while(t>0){
          --t;

        scanf("%s", a);
        scanf("%s", b);

        printf("Caso #%d: ", ++c);

        if (strcmp (a, b) == 0){
          printf("De novo!\n");
        }else if (strcmp (a,"tesoura") == 0 && strcmp (b, "papel") == 0){
          B();
        }else if (strcmp (b, "tesoura") == 0 && strcmp(a, "papel") == 0){
          T();
        }else if (strcmp (a, "papel") ==0 && strcmp(b, "pedra") == 0){
          B();
        }else if (strcmp (b, "papel") ==0 && strcmp(a, "pedra") == 0){
          T();
        }else if (strcmp (a, "pedra") ==0 && strcmp(b, "lagarto") == 0){
          B();
        }else if (strcmp (b, "pedra") ==0 && strcmp(a, "lagarto") == 0){
          T();
        }else if (strcmp (a, "lagarto") ==0 && strcmp(b, "Spock") == 0){
          B();
        }else if (strcmp (b, "lagarto") ==0 && strcmp(a, "Spock") == 0){
          T();
        }else if (strcmp (a, "Spock") ==0 && strcmp(b, "tesoura") == 0){
          B();
        }else if (strcmp (b, "Spock") ==0 && strcmp(a, "tesoura") == 0){
          T();
        }else if (strcmp (a, "tesoura") ==0 && strcmp(b, "lagarto") == 0){
          B();
        }else if (strcmp (b, "tesoura") ==0 && strcmp(a, "lagarto") == 0){
          T();
        }else if (strcmp (a, "lagarto") ==0 && strcmp(b, "papel") == 0){
          B();
        }else if (strcmp (b, "lagarto") ==0 && strcmp(a, "papel") == 0){
          T();
        }else if (strcmp (a, "papel") ==0 && strcmp(b, "Spock") == 0){
          B();
        }else if (strcmp (b, "papel") ==0 && strcmp(a, "Spock") == 0){
          T();
        }else if (strcmp (a, "Spock") ==0 && strcmp(b, "pedra") == 0){
          B();
        }else if (strcmp (b, "Spock") ==0 && strcmp(a, "pedra") == 0){
          T();
        }else if (strcmp (a, "pedra") ==0 && strcmp(b, "tesoura") == 0){
          B();
        }else if (strcmp (b, "pedra") ==0 && strcmp(a, "tesoura") == 0){
          T();
        }
      }
    }
    return 0;
}
