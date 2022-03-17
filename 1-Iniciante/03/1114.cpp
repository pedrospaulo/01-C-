#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

  int numero;

  while(cin >> numero)
  {
    if (numero == 2002)
    {
      printf("Acesso Permitido\n");
      break;
    }
    else
    {
      printf("Senha Invalida\n");
    }
  }
  return 0;
}
