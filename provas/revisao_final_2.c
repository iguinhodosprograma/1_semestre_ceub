#include <stdio.h>
#include <string.h>

int main()
{
    int quantia;
    float soma, maiornota, media;
    char nome_alunos[30][100], maior_aluno;
    printf("Quantos alunos deseja cadastrar (maximo de 30 e minimo de 1)? ");
    scanf("%d", &quantia);

    while (quantia < 1 || quantia > 30)
    {
        printf("Por favor, insira um numero entre 1 e 30: ");
        scanf("%d", &quantia);
    }
float notas[quantia];

    for (int i = 0; i < quantia; i++)
    {
        printf("Nome do aluno %i: ", i + 1);
        scanf("%s", nome_alunos[i]);
        printf("Nota do aluno %i: ", i + 1);
        scanf("%f", &notas[i]);
        
        if (i == 0)
        {
            maiornota = notas[i];
            maior_aluno = i;
        }
        if (notas[i] > maiornota)
        {
            maiornota = notas[i];
            maior_aluno = i;
        }

        soma += notas[i];
        
    }
media = soma/quantia;
printf("A media foi = %.2f\n", media);
printf("O aluno com a maior nota foi: %s", nome_alunos[maior_aluno]);

return 0;
}