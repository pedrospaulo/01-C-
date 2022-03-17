#include <bits/stdc++.h>
#define pi 3.14159

using namespace std;

class Basico{
public:

    double distancia(double x1, double y1, double x2, double y2){
        return sqrt((x2 - x1) + (y2 - y1));
    }
    double setorcircular(double teta, double raio){
        return (teta * pi * (raio * raio))/360;
    }
    double triangulo(double teta, double x){
        double reta;
        reta = (cos(teta)*x)/sin(teta);
        return reta;
    }

    /* tenho que pensar em uma forma de resolver sistemas,
       acho que vou fazer uma biblioteca para isso*/
/*    double intercecaodeponto(double funcao1, double funcao2){
        double sistema[][] = {funcao1, funcao2};

    }
}*/

class Condicoes{
public:
    bool cidadecanhao(double dcc){
        if(dcc > r){
            return true;
        }else{
            return false;
        }
    }
    void maiorponto(int x1, int x2, int y1, int y2){
        int aux;
        if(x1 > x2){
            aux = x1;
            x1 = x2;
            x2 = aux;
            aux = y1;
            y1 = y2;
            y2 = aux;
        }
    }
}
