#include <iostream>

int main(){

  int v, t;

  while(std::cin >> v){
    std::cin >> t;
    std::cout << v * (2 * t)<< std::endl;
  }
  return 0;
}
