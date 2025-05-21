#include <stdio.h>
int main(){
    int opcao, a, g, d;
    printf("Escolha uma opcao [1.Alcool 2.Gasolina 3.Diesel 4.Fim]\n");
    opcao = 0;
    a = 0;
    d = 0;
    g = 0;
    
while (opcao != 4){
    scanf("%i", &opcao);
    if (opcao == 1){
        a += 1;
    }
    else if (opcao == 2){
        g += 1;
    }
    else if (opcao == 3){
        d += 1;
    }
    
}
printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i", a, g, d);
}