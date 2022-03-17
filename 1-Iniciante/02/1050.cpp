#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

    scanf("%d", &a);

    switch(a){
      case 11:
        printf("Sao Paulo\n");
        break;
      case 19:
        printf("Campinas\n");
        break;
      case 21:
        printf("Rio de Janerio\n");
        break;
      case 27:
        printf("Vitoria\n");
        break;
      case 31:
        printf("Belo Horizinte\n");
        break;
      case 32:
        printf("Juiz de Fora\n");
        break;
      case 61:
        printf("Brasilia\n");
        break;
      case 71:
        printf("Salvador\n");
        break;
      default:
        printf ("DDD nao cadastrado\n");
        break;
    }

    return 0;
}

/*#include <iostream>

using namespace std;

int main(){
    int a;

    cin >> a;

    switch(a){
              case 11:
                   cout << "Sao Paulo\n";
                   break;
              case 19:
                   cout << "Campinas\n";
                   break;
              case 21:
                   cout << "Rio de Janeiro\n";
                   break;
              case 27:
                   cout << "Vitoria\n";
                   break;
              case 31:
                   cout << "Belo Horizonte\n";
                   break;
              case 32:
                   cout << "Juiz de Fora\n";
                   break;
              case 61:
                   cout << "Brasilia\n";
                   break;
              case 71:
                   cout << "Salvador\n";
                   break;
              default:
                      cout << "DDD nao cadastrado\n";
                      break;
    }

    return 0;
} */
