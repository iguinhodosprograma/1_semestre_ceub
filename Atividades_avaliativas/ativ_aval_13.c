#include <stdio.h>
#include <math.h>

int main(){
    float salario, nsalario, reajuste, percentual;

scanf("%f", &salario);

if ((salario >= 0)&&(salario <= 400))
{
    percentual = (0.15);

}
else if ((salario > 400)&&(salario <= 800))
{
    percentual = (0.12);

}
else if ((salario > 800)&&(salario <= 1200))
{
    percentual = (0.10);

}
else if ((salario > 1200)&&(salario <= 2000))
{
    percentual = (0.07);

}
else if ((salario > 2000))
{
    percentual = (0.04);

}
else{
    printf("Salario Invalido");
}

reajuste = salario * percentual;
nsalario = salario + reajuste;

printf("Novo salario: %.2f\n", nsalario);
printf("Reajuste ganho: %.2f\n", reajuste);
printf("Em percentual: %.0f%%", percentual * 100);

return 0;
}