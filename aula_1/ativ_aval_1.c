#include <stdio.h>
#include <stdlib.h>
//igor christofidis de lima RA: 22502008
int main(void)
{
    float A, B, C, MEDIA;

    printf("escreva as notas: \n");
scanf("%f%f%f", &A, &B, &C); 
MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;
    printf("MEDIA = %.2f\n", MEDIA);
return 0;
}