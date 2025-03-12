#include <stdio.h>
#include <stdlib.h>
//igor christofidis de lima RA: 22502008
int main(void){
    int produto, preco;
    float fixo, salario;
    char nome[50];
preco = 20;
    printf("qual eh o seu nome? \n");
gets(nome);
    printf("quantos produtos voce vendeu? ");
scanf("%d", &produto);
    printf("quanto voce recebe de salario? ");
scanf("%f", &fixo);
salario = (fixo + (produto * preco) * 15/100);
    printf("ola %s", nome);
    printf("o seu salario eh de: %.2f", salario);

return 0;

}