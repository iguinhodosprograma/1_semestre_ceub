#include <stdio.h> //Igor Christofidis de Lima   RA: 22502008

int main(){
    int distancia;
    float litros, gasto;

    printf("qual foi a distancia percorrida? ");
scanf("%i", &distancia);
    printf("quantos litros foram gastos? ");
scanf("%f", &litros);

gasto = distancia / litros;

    printf("km/l %.3f", gasto);

return 0;
    }