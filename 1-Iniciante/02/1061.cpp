#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main (){

  int di = 0, hi = 0, mi = 0, si = 0;
  int df = 0, hf = 0, mf = 0, sf = 0;

  char dia[4];
  char pontos[3];
  char dia1[4];
  char pontos1[3];


  cin.get(dia,4);
  cin >> di;
  cin >> hi;
  cin.get(pontos,3);
  cin >> mi;
  cin.get(pontos,3);
  cin >> si;
  cin.getline(dia,0);
  cin.get(dia1,4);
  cin >> df;
  cin >> hf;
  cin.get(pontos1,3);
  cin >> mf;
  cin.get(pontos1,3);
  cin >> sf;

  long temp = (df*86400 + hf*3600 + mf*60 + sf) - (di*86400 + hi*3600 + mi*60 + si);
  cout << temp/86400 << " dia(s)\n";
  cout << (temp%86400)/3600 << " hora(s)\n";
  cout << ((temp%86400)%3600)/60 << " minuto(s)\n";
  cout << ((temp%86400)%3600)%60 << " segundo(s)\n";

  return 0;
}
