#include <stdio.h> //Igor Christofidis de Lima   RA:22502008
int main(){
    int x, y;
    while (x != 0 || y != 0){
        scanf("%i %i", &x, &y);
        if (x > 0 && y > 0){
            printf("primeiro\n");
        }
        if (x < 0 && y > 0){
            printf("segudo\n");
        }
        if (x < 0 && y < 0){
            printf("terceiro\n");
        }
        if (x > 0 && y < 0){
            printf("quarto\n");
        }
    }
}