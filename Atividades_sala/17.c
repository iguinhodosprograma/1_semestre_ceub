#include <stdio.h>

int main(){
    float X, Y;

    printf("x: ");
scanf("%f", &X);
    printf("y: ");
scanf("%f", &Y);

if ((X > 0 && Y > 0))
{
    printf ("Primeiro Quadrante");

}

else if((X < 0 && Y > 0))
{
    printf ("Segundo Quadrante");

}

else if((X < 0 && Y < 0))
{
    printf ("Terceiro Quadrante");

}

else if((X > 0 && Y < 0))
{
    printf ("Quarto Quadrante");

}

else if((X == 0 && Y == 0))
{
    printf ("Origem");

}

else if((X != 0 && Y == 0))
{
    printf ("Eixo X");

}

else if((X == 0 && Y != 0))
{
    printf ("Eixo Y");

}

return 0;
}