#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

int main()
{
char *senha = "estoque2025", resposta[20], *sim = "S", *nao = "N", continuar[10] = "S", *nulo = "";
char nome[20];
int quantidade, i, qtdtotal = 0;
float preco, valortotal, precogeral;
i = 0;


do
{
    printf("Digite a senha: ");
    scanf("%s", &resposta);

    if (strcmp(resposta, senha) == 1)
    {
        printf("Senha INCORRETA, tente novamente\n");
    }
    else if (strcmp(resposta, senha) == 0)
    {
        break;
    }
    i++;

} while (i < 3);
if (i == 3)
{
    printf("Quantidade de tentativas esgotada");
    return 0;
}
while ((strcmp(continuar, sim) == 0))
{
    printf("Nome do produto: ");
    scanf("%s", &nome);
    if (strcmp(nome, nulo) == 0)
    {
        break;
    }
    
    printf("Quantidade a ser comprada: ");
    scanf("%d", &quantidade);
    while (quantidade <= 0)
    {
        printf("Quantidade a ser comprada: ");
        scanf("%d", &quantidade);
    }
    
    printf("Preco unitario: ");
    scanf("%f", &preco);
    while (preco <= 0)
    {
        printf("Preco unitario: ");
        scanf("%f", &preco);  
    }
    precogeral = preco*quantidade;
    valortotal = valortotal + precogeral;
    qtdtotal += 1;

    printf("Deseja continuar? [S/N] ");
    scanf("%s", &continuar);

        while (strcmp(continuar, nao) == 1 || (strcmp(continuar, sim) == 1))
        {
            printf("Digite apenas S ou N, por favor: ");
            scanf("%s", &continuar);
            if (strcmp(continuar, sim) == 0)
            {
                break;
            }
        }
    if (strcmp(continuar, nao) == 0)
    {
        break;
    }
    
   
}

printf("Valor das compras: %.2f\n", valortotal);
printf("Quantidade de produtos cadastrados: %d", qtdtotal);


}