#include <iostream>

using namespace std;

int main(){
  int x, z, soma;

  while(true){
    cin >> x;
    cin >> z;

    while(z <= x){
      cin >> z;
    }
    soma = 0;

    for(int i = 1; true; i++){
      soma += x;
      x++;
      if(soma > z){
        cout << i << endl;
        break;
      }
    }
    break;
  }
  return 0;
}
