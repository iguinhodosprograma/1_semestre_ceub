#include <stdio.h>
int main(){
    double n1, n2, media;

scanf("%lf", &n1);

    while (n1 < 0 || n1 > 10){
        printf("Nota Invalida\n");
        scanf("%lf", &n1);
    }

n2 = n1;
scanf("%lf", &n1);
    while (n1 < 0 || n1 > 10)
    {
        printf("Nota Invalida\n");
        scanf("%lf", &n1);
    }
    media = (n1 + n2)/2;
    printf("media = %.2lf", media);
return 0;
}