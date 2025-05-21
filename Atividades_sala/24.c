#include <stdio.h>

int main(){

    int N, cont, resultado;
scanf("%d", &N);

for (cont = 1; cont <= 10; cont ++){
    resultado = cont*N;
    printf("%d X %d = %d\n", cont, N, resultado);
}
return (0);
}