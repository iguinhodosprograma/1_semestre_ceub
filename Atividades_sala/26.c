#include <stdio.h>

int main() {
    int N, i, quantidade;
    char tipo;
    int total_coelhos = 0, total_ratos = 0, total_sapos = 0, total_cobaias = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d %c", &quantidade, &tipo);

        if (tipo == 'C') {
            total_coelhos += quantidade;
        } else if (tipo == 'R') {
            total_ratos += quantidade;
        } else if (tipo == 'S') {
            total_sapos += quantidade;
        }
    }

    total_cobaias = total_coelhos + total_ratos + total_sapos;

    printf("Total: %d cobaias\n", total_cobaias);
    printf("Total de coelhos: %d\n", total_coelhos);
    printf("Total de ratos: %d\n", total_ratos);
    printf("Total de sapos: %d\n", total_sapos);

    printf("Percentual de coelhos: %.2f %%\n", (total_coelhos * 100.0) / total_cobaias);
    printf("Percentual de ratos: %.2f %%\n", (total_ratos * 100.0) / total_cobaias);
    printf("Percentual de sapos: %.2f %%\n", (total_sapos * 100.0) / total_cobaias);

    return 0;
}
