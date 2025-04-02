#include <stdio.h>  

    int main(){
int X, Y;
float preco, total;


    printf("Qual eh o codigo do produto? ");
scanf("%i", &X);

    printf("Quantos produtos voce vai comprar? ");
scanf("%i", &Y);

    if ((X == 1))
    {
        (preco = 4);

    }
  
    else if((X == 2))
    {
        (preco = 4.5);
    }

    else if((X == 3))
    {
        (preco = 5);
    }

    else if((X == 4))
    {
        (preco = 2);
    }

    else if((X == 5))
    {
        (preco = 1.5);
    }

total = preco * Y;

printf("Total: R$%.2f", total);

return 0;
    }