#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

  long long int H, I, aux;

  while(cin >> H){
    cin >> I;

    if (I < H){
      aux = I;
      I = H;
      H = aux;
    }

    cout << I - H << endl;
  }
  return 0;
}
