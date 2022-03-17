/*
#include <stdio.h>
#include <math.h>

int main(){

  int a, b;
  int q, r;

  scanf("%d %d", &a, &b);

  q = a / b;
  r = a%b;

  if(r < 0){
    if(q > 0){
      q ++;
    }
    if(q < 0){
      q --;
    }
    r = a - (b * q);
  }

  printf("%d %d\n", q, r);

  return 0;
}
*/

// peguei https://github.com/pin3da/Programming-contest
// /blob/master/solved/URI/1837%20Preface/solution.cc


#include <bits/stdc++.h>
#define D(x) cout << #x " = " << (x) << endl
#define endl '\n'

using namespace std;

int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);
 int a, b;
 while (cin >> a >> b) {
   int q, r;

   for (r = 0; r < abs(b); ++r) {
     if (((a - r) % b) == 0) {
       q = (a - r) / b;
       break;
     }
   }
   cout << q << ' ' << r << endl;
 }
 return 0;
}
