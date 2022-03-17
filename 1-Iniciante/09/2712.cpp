#include <stdio.h>
#include <string.h>

int main() {
	int n=0;
    int tamanho=0;
    int maiusculas=0;
	int barra=0;
    int numero=0;
	char placa[101];

	scanf("%d", &n);

	while(n--){

        scanf("%s", placa);

		tamanho = strlen(placa);

		if(tamanho == 8) {
			if(placa[0] >= 'A' && placa[0] <= 'Z') {
				if(placa[1] >= 'A' && placa[1] <= 'Z') {
					if(placa[2] >= 'A' && placa[2] <= 'Z') {
						maiusculas = 1;
					}
				}
			}
		}

		if(placa[3] == '-' && maiusculas == 1) {
			barra = 1;
		}

		if(barra == 1) {
			if(placa[4] >= '0' && placa[4] <= '9') {
				if(placa[5] >= '0' && placa[5] <= '9') {
					if(placa[6] >= '0' && placa[6] <= '9') {
						if(placa[7] >= '0' && placa[7] <= '9') {
							numero = 1;
						}
					}
				}
			}
		}

		if(numero == 1) {
			if(placa[tamanho - 1] == '1' || placa[tamanho - 1] == '2') {
				printf("MONDAY\n");
			}else if(placa[tamanho - 1] == '3' || placa[tamanho - 1] == '4') {
				printf("TUESDAY\n");
			}else if(placa[tamanho - 1] == '5' || placa[tamanho - 1] == '6') {
				printf("WEDNESDAY\n");
			}else if(placa[tamanho - 1] == '7' || placa[tamanho - 1] == '8') {
				printf("THURSDAY\n");
			}else if(placa[tamanho - 1] == '9' || placa[tamanho - 1] == '0') {
				printf("FRIDAY\n");
			}
		} else {
				printf("FAILURE\n");
			}

		barra = 0, maiusculas = 0, numero = 0;
	}

	return 0;
}
