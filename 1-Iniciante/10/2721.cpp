#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

	int n;
	int soma = 0;
	int rena;


	for (int i = 0; i < 9; i++){
	scanf("%d", &n);

	soma += n;

	}

	rena = soma % 9;

	switch(rena){
		case 0:
			printf("Rudolph\n");
			break;
		case 1:
			printf("Dasher\n");
			break;
		case 2:
			printf("Dancer\n");
			break;
		case 3:
			printf("Prancer\n");
			break;
		case 4:
			printf("Vixen\n");
			break;
		case 5:
			printf("Comet\n");
			break;
		case 6:
			printf("Cupid\n");
			break;
		case 7:
			printf("Donner\n");
			break;
		case 8:
			printf("Blitzen\n");
			break;
	}
	return 0;
}
