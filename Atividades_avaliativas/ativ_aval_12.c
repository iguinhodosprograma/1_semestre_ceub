#include <stdio.h> //Igor Christofidis de Lima   RA:22502008
int main(){
    int horasi, minutosi, horasf, minutosf, dhora, dmin;

printf("quais foram as horas e minutos iniciais? ");
scanf("%i %i", &horasi, &minutosi);
printf("quais foram as horas e minutos finais? ");
scanf("%i %i", &horasf, &minutosf);

dhora = horasf - horasi;

dmin = minutosf - minutosi;

if ((dhora == 0) && (dmin == 0))
{
    dhora = dhora + 24;
}

printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)", dhora, dmin);

return 0;
}