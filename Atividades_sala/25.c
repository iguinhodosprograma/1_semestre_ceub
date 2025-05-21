#include <stdio.h>

int main(){
    float n1, n2, n3, total, media;
    int cont, casos;

scanf("%d", &casos);

    for (cont = 1; cont <= casos; cont++){
        scanf("%f%f%f", &n1, &n2, &n3);
        total = (n1*2.0) + (n2*3.0) + (n3*5.0);
        media = total/10.0;
        printf("media = %.1f\n", media);
    }
return 0;
}