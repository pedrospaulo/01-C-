#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define true 1
#define false 0
#define WIN "You’re a coastal aircraft, Robbie, a large silver aircraft."
#define LOSE "Bad boy! I’ll hit you."

bool is_prime(unsigned);

int main(int argc, char **argv)
{

	int vet[30];
	int n, i, s, ans;

	while (scanf("%d", &n) != EOF)
	{

		for (i = 0; i < n; ++i)
			scanf("%d", &vet[i]);

		scanf("%d", &s);

		ans = 0;
		i = n - 1;
		while (i >= 0)
			ans += vet[i], i -= s;

		printf("%s\n", is_prime(ans) ? WIN : LOSE);

	}

	return 0;

}

bool is_prime(unsigned num)
{

	unsigned i;
	unsigned raiz = (int)sqrt(num);

	if (num != 2  && num % 2 == 0 || num == 1)
		return false;

	for (i = 3; i <= raiz; i += 2)
		if (num % i == 0)
			return false;

	return true;

}
/*#include <stdio.h>

int main(){

    int vet[501];
    int m, n, mi;
    int soma;
    int cont;
    int primo;

    while(scanf("%d", &m)){
        cont = 0;
        for(int i = 0; i < m; i++){
            vet[i] = scanf("%d", &mi);
            cont++;
        }
        scanf("%d", &n);
        soma = 0;
        if(cont == n){
            soma += vet[n];
        }
        for(int i = 0; i < m; i = i+n){
            soma += vet[i];
        }
        primo = 0;

        for(int i = 1; i <= soma; i++){
            if(soma % i == 0){
                primo = primo + 1;
            }
        }
        if(primo == 2){
            printf("Bad boy! I’ll hit you.\n");
            continue;

        }else{
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
            break;
        }
    }
    return 0;
}*/
