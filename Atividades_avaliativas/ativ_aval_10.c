#include <stdio.h> //Igor Christofidis de Lima   RA:22502008

int main(){
    float A, B, C, perimetro, area, soma;

scanf("%f %f %f", &A, &B, &C);

soma = B + C;

    if ((A >= B + C))
    {
        area = (A + B)*C/(2);

        printf("Area = %.1f", area);
    }
    
    else {
        perimetro = (A + B + C);

        printf("Perimetro = %.1f", perimetro);
    }

    return 0;
}