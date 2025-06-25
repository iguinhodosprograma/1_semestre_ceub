#include <stdio.h>
#include <string.h>

int main()
{
char *nome[20], *maior[20];
int idade, tempo, maiortempo, quantidade, tempogeral = 0, menor10=0, maior60=0;
float porcentagem, media;

printf("Quantos pacientes foram atendidos? ");
scanf("%d", &quantidade);

for (int i = 0; i < quantidade; i++)
{
    printf("Nome: ");
    scanf("%s", &nome);
    printf("Idade: ");
    scanf("%d", &idade);
    for (int i=0 ; i<100000000000; i++)
    {
        if (idade <= 0)
        {
            printf("Idade: ");
            scanf("%d", &idade);    
        }
        else
        {
            break;
        }
    }

    printf("Tempo de atendimento (minutos): ");
    scanf("%d", &tempo);
    for (int i=0 ; i<100000000000; i++)
    {
        if (idade <= 0)
        {
            printf("Tempo de atendimento (minutos): ");
            scanf("%d", &tempo);    
        }
        else
        {
            break;
        }
    }

    if (i == 0)
    {
        strcpy(maior, nome);
        maiortempo = tempo;
    }
    if (tempo > maiortempo)
    {
        strcpy(maior, nome);
        maiortempo = tempo;
    }

    if (tempo < 10)
    {
        menor10++;
    }

    if (idade >= 60)
    {
        maior60++;
    }
    tempogeral = tempogeral + tempo;
} 


porcentagem = (float)maior60/quantidade * 100;
media = (float) tempogeral/quantidade;

printf("%.2f\n", media);
printf("%s\n", maior);
printf("%d\n", menor10);
printf("%.2f %%", porcentagem);

}