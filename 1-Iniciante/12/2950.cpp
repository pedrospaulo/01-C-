#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main (){

  int N, X, Y;
	double ICM;

	cin >> N >> X >> Y;

	ICM = (double)N/(X+Y);

	cout << fixed;

	cout.precision(2);

	cout << ICM << endl;

	return 0;
}
