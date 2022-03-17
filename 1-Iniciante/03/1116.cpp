#include <stdio.h>
#include <iostream>

using namespace std;

int main (){
  int N;
  int X, Y;
  float divi;

  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    cin >> X;
    cin >> Y;

    if (Y != 0){
      divi = (float)X / Y;
      printf("%.1f\n", divi);
    }else{
      printf("divisao impossivel\n");
    }
  }
  return 0;
}
