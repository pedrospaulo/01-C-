#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

  float n1, n2;
  float n3;

  n3 = 0;

  while (true){
    cin >> n1;

    if (n1 < 0 || n1 > 10){
      printf("nota invalida\n");
    }else if(n3 == 0){
      n2 = n1;
      n3 = 1;
    }else{
      printf("media = %.2f\n", (n2 + n1) / 2);
      break;
    }
  }
  return 0;
}
