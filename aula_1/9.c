#include <stdio.h>

int main() {
    int codigo1, codigo2, numero_pecas;
    float preco_peca, valor_total;
    valor_total = 0;

scanf("%d %d %f", &codigo1, &numero_pecas, &preco_peca);
valor_total += (numero_pecas * preco_peca);

scanf("%d %d %f", &codigo2, &numero_pecas, &preco_peca);
valor_total += (numero_pecas * preco_peca);
    
    printf("VALOR A PAGAR: R$%.2f\n", valor_total);

return (0);
}