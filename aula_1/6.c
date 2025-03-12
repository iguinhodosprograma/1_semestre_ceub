#include <stdio.h>
#include <stdlib.h> //bibloteca de operaçoes

int main(int argc, char *argv[]) // o () é usado pra colocar outras operaçoes
{
    float A, B, MEDIA;

    printf("escreva seus numeros: \n");
scanf ("%f%f", &A, &B);
MEDIA = (A * 3.5 + B * 7.5)/11;
    printf("MEDIA = %5.lf/n", MEDIA);

return 0;
}