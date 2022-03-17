#include <stdio.h>
#include <math.h>

int main (){

  float salario;

  scanf ("%f", &salario);

  if(salario >= 0.0 && salario <= 400.00){
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salario + (0.15 * salario), 0.15 * salario, 15,'%');
  }if(salario >= 400.01 && salario <= 800.00){
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salario + (0.12 * salario), 0.12 * salario, 12,'%');
  }if(salario >= 800.01 && salario <= 1200.00){
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salario + (0.10 * salario), 0.10 * salario, 10,'%');
  }if(salario >= 1200.01 && salario <= 2000.00){
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salario + (0.07 * salario),0.07 * salario, 7,'%');
  }if(salario > 2000.00){
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n", salario + (0.04 * salario), 0.04 * salario, 4,'%');
  }
  return 0;
}
