#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main (){

  int a, b, c, h;
  int v[3];

  scanf("%d\n", &a);
  scanf("%d\n", &b);
  scanf("%d\n", &c);

  v[0] = a;
  v[1] = b;
  v[2] = c;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if (v[i] < v[j]){
        h = v[j];
        v[j] = v[i];
        v[i] = h;
      }
    }
  }
  cout << v[0] << endl << v[1] << endl << v[2] << endl << endl;
  cout << a << endl << b << endl << c << endl;

  return 0;

}
