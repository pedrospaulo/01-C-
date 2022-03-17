#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main(){

  long long int p1, p2, n;
  long double h, a, v, vy, vx, ht, lq;
  double g = 9.80665;
  double n = 3.14159;


  cin >> h;

    cin >> p1 >> p2;

      cin >> n;

        for(int i = 0; i < n; i++){
          cin >> a;
          cin >> v;

          vy = sin((a * pi)/180);
          vx = cos((a * pi)/180);

          ht = (pow(vy * (sin 2 (a)), 2)) / 2 * g;

          lq = ((vx - vy) / g) + (vx (sqrt((2.h)/g));

          if(p1 <= lq <= p2){
            printf("%.5Lf -> DUCK");
          }else{
            printf("%.5Lf -> NUCK")
          }
        }
  return 0;
}
