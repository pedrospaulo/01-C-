#include <bits/stdc++.h>

int AnosBissexto(int ano);

int TotalMes(int mes, int ano);

int TotalDias(int ano, int mes, int dia);

int DiaDaSemana(int ano, int mes, int dia);

int main(void){

  int dia, mes, ano;
  int diad;

  while(scanf("%d %d %d", &dia, &mes, &ano) != 0){

    diad = DiaDaSemana(ano, mes, dia);

    if(diad == 4){
      printf ("segunda\n");
    }
    if(diad == 5){
      printf ("terça\n");
    }
    if(diad == 6){
      printf ("quarta\n");
    }
    if(diad != 1 && diad != 2 && diad != 3 && diad != 4 && diad != 5 && diad != 6){
      printf ("quinta\n");
    }
    if(diad == 1){
      printf ("sexta\n");
    }
    if(diad == 2){
      printf ("sabado\n");
    }
    if(diad == 3){
      printf ("domingo\n");
    }
  }
  return 0;
}


int DiaDaSemana(int ano, int mes, int dia){
  long int dias;
  dias = TotalDias(ano, mes, dia);
  if(dias % 7 == 1){
    return 1;
  }
  if(dias % 7 == 2){
    return 2;
  }
  if(dias % 7 == 3){
    return 3;
  }
  if(dias % 7 == 4){
    return 4;
  }
  if(dias % 7 == 5){
    return 5;
  }
  if(dias % 7 == 6){
    return 6;
  }
  if(dias % 7 == 0){
    return 7;
  }

}

int TotalDias(int ano, int mes, int dia){
  long int totaldias = 0;
  for(int i = 1; i <= TotalMes(mes, ano); i++){
    if(i%12 == 1){
      totaldias += 31;
    }
    if(i%12 == 2){
      totaldias += 28;
    }
    if(i%12 == 3){
      totaldias += 31;
    }
    if(i%12 == 4){
      totaldias += 30;
    }
    if(i%12 == 5){
      totaldias += 31;
    }
    if(i%12 == 6){
      totaldias += 30;
    }
    if(i%12 == 7){
      totaldias += 31;
    }
    if(i%12 == 8){
      totaldias += 31;
    }
    if(i%12 == 9){
      totaldias += 30;
    }
    if(i%12 == 10){
      totaldias += 31;
    }
    if(i%12 == 11){
      totaldias += 30;
    }
    if(i%12 == 12){
      totaldias += 31;
    }
  }
  totaldias += AnosBissexto(ano);
  totaldias += dia;

  return totaldias;
}

int TotalMes(int mes, int ano){
    int totalmes;
    totalmes = ((ano-2000)*12)+mes;
    return totalmes;
}

int AnosBissexto(int ano){
  int cont = 0;
  for(int i = 1; i <= ano - 2000; i++){
    if(i%4 == 0){
      cont++;
    }
  }
  return cont;
}
