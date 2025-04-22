#include <stdio.h>

int main(){
    int comeco, final, duracao;

scanf("%i %i", &comeco, &final);

    if ((comeco < 12))          
    {
        duracao = (comeco + 24) - (final);
        
        if ((comeco < 0))
        {
            (duracao)*(-1);
        }
        
    }
    
    else if ((comeco > 12))
    {
        duracao = comeco - final;

        if ((comeco < 0))
        {
            (duracao)*(-1);
        }
        
    }

printf("O JOGO DUROU %i HORA(S)", duracao);

return 0;
}