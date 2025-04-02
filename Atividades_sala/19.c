#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, soma, soma1;

scanf("%f %f %f", &a, &b, &c);

soma = b + c;
soma1 = (pow(b,2) + pow(c,2));

if (a >= soma)
{
    printf("NAO FORMA TRIANGULO"); 
}

else if ((pow(a,2)) == (soma1))
{
    printf("TRIANGULO RETANGULO\n");
}

else if ((pow(a,2)) > (soma1))
{
    printf("TRIANGULO OBTUSANGULO\n");
}

else if ((pow(a,2)) < (soma1))
{
    printf("TRIANGULO ACUTANGULO\n");
}

if (a == c && c == b)
{
    printf("TRIANGULO EQUILATERO");
}

else if (a == b && b != c)
{
    printf("TRIANGULO ISOSCELES");
}

else if (a == c && b != c)
{
    printf("TRIANGULO ISOSCELES");
}

else if (c == b && b != a)
{
    printf("TRIANGULO ISOSCELES");
}


return 0;


}