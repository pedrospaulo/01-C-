#include <stdio.h>

int main (){
	int c = 300;
	int boi = 1500;
	int b = 600;
	int m = 1000;
	int i = 150;
	int d = 225;
	int por = 0;
	int n1,n2,n3,n4,n5;

	scanf("%d", &n1);
	por += c * n1;
	scanf("%d", &n2);
	por += boi * n2;
	scanf("%d", &n3);
	por += b * n3;
	scanf("%d", &n4);
	por += m * n4;
	scanf("%d", &n5);
	por += i * n5;

	por += d;
	
	printf("%d\n", por);


	return 0;
}
