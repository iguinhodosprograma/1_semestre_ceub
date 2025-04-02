#include <stdio.h>

int main(){
    int anos, meses, idade;

scanf("%i", &idade);

anos = idade/365;
idade = idade - anos * 365;

meses = idade / 30;
idade = idade - meses * 30;



printf("%i ano(s)\n", anos);
printf("%i mes(ses)\n", meses);
printf("%i dias(s)", idade);

    return 0;

    }