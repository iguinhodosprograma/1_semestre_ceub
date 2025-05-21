#include <stdio.h>

int main(){
    int contpositivos = 0;
    float valor, soma = 0;

    int i;
    for (i = 0; i < 6; i += 1) {
        scanf("%f", &valor);

    if(valor > 0){
        soma = soma + valor;
        contpositivos++;
        }
    }
printf("%d Valores Positivos\n", contpositivos);
printf("%.1f", soma/contpositivos);

return (0);

}