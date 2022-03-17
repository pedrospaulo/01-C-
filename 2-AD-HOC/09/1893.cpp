#include <iostream>

using namespace std;

int main(){

  int v1, v2;

  cin >> v1 >> v2;

  if(0 <= v2 && v2 <= 2){
    cout << "nova" <<endl;
  }else if(97 <= v2 && v2 <= 100){
    cout << "cheia" <<endl;
  }else if(3 <= v2 && v2 <= 96 && v2 < v1){
    cout << "minguante" <<endl;
  }else if(3 <= v2 && v2 <= 97 && v2 > v1){
    cout << "crescente" <<endl;
  }
  return 0;
}
