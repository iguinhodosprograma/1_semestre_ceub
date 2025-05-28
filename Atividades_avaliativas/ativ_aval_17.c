#include <stdio.h>
#include <stdbool.h> //Igor Christofidis de Lima   RA:22502008
int main(){
    int grenal, vgremio, vinter, igol, ggol, escolha, empate;
grenal = 0;
vinter = 0;
vgremio = 0;
escolha = 1;
empate = 0;
    while (escolha == 1){
        scanf("%d %d", &igol, &ggol);
        printf("Novo grenal (1-sim/2-nao)");
        scanf("%d", &escolha);
        

        if (igol > ggol){
            vinter++;
        }
        else if (ggol > igol){
            vgremio++;
        }
        else if (ggol == igol){
            empate++;
        }
        grenal++;

    }
printf("%d grenais\n", grenal);
printf("Inter: %d\n", vinter);
printf("Gremio: %d\n", vgremio); 
printf("Empates: %d\n", empate);

if (vinter > vgremio){
    printf("Inter venceu mais");
}
else if (vgremio > vinter){
    printf("Gremio venceu mais");
}

}