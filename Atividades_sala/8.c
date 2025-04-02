#include <stdio.h>

int main(){
    int numero, horatrabalhada;
    float valorhora;

    printf("qual eh o seu numero de funcionario? \n");
scanf("%d", &numero);
    printf("qual eh o valor da hora trabalhada? \n");
scanf("%f", &valorhora);
    printf("quantas horas voce trabalhou? ");
scanf("%d", &horatrabalhada);

    printf("NUMERO = %d\n", numero);
    printf("SALARIO = U$%.2f", horatrabalhada * valorhora);
return 0;
}