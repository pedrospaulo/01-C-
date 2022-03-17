#include <bits/stdc++.h>

int Raio(int valor, int n);
int Dano(int x, int y, int c, int h, int xc, int yc, int n);

int main(){

  int t, i, x, y, c, h, xc, yc, n;
  char nome[5];
  int valor, dano;


  scanf("%d", &t);
  for(i = 0; i < t; i++){

    scanf("%d %d %d %d", &c, &h, &x, &y);
    scanf("%s %d %d %d", &nome, &n, &xc, &yc);

    valor = nome[0];
    n = Raio(valor, n);

    dano = Dano(x, y, c, h, xc, yc, n);

    if(dano){
      switch (nome[0]){
        case 'f':
          printf("200\n");
          break;
        case 'w':
          printf("300\n");
          break;
        case 'e':
          printf("400\n");
          break;
        case 'a':
          printf("100\n");
          break;
        default:
          break;
      }
    }else{
      printf("0\n");
    }
  }



  return 0;
}

int Raio(int valor, int n){
  int raio;

  if(valor == 102){
    if(n == 1){
      raio = 20;
    }
    if(n == 2){
      raio = 30;
    }
    if(n == 3){
      raio = 50;
    }
  }
  else if(valor == 119){
    if(n == 1){
      raio = 10;
    }
    if(n == 2){
      raio = 25;
    }
    if(n == 3){
      raio = 40;
    }
  }else if(valor == 101){
    if(n == 1){
      raio = 25;
    }
    if(n == 2){
      raio = 55;
    }
    if(n == 3){
      raio = 70;
    }
  }else{
    if(n == 1){
      raio = 18;
    }
    if(n == 2){
      raio = 38;
    }
    if(n == 3){
      raio = 60;
    }
  }
  return raio;
}

int Dano(int x, int y, int c, int h, int xc, int yc, int n){
  if(xc-n <= x+c && xc+n >= x){
    if(yc-n <= y+h && yc + n >= h){
      return 1;
    }
  }else{
    return 0;
  }
}
