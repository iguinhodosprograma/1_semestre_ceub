#include <stdio.h>
#include <stdbool.h>

int main(){
    float valor;

scanf("%f", &valor);


    if ((25 >= valor) && (valor > 0))
    {
        printf("Intervalo [0,25]");
    }
    
    
    else if ((valor > 25) && (valor <= 50))
    {
        printf("Intervalo (25,50]");
    }
    
    
    else if ((valor > 50) && (valor <=75))
    {
        printf("Intervalo (50,75]");
    }
    
    
    else if ((valor > 75) && (valor <= 100))
    {
        printf("Intervalo (75,100]");
    }
    
    else {
        printf ("Fora de Intervalo");
    }

return 0;

    }