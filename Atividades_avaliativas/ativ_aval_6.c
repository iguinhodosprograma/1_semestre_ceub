#include <stdio.h> //Igor Christofidis de Lima   RA:22502008
int main(){
    int sec, min, hr;
scanf("%i", &sec);

    min = sec/60;
    hr = sec/3600;

    printf("%i:" , hr);
sec = sec - hr * 3600;
    printf("%i:" , min);
sec = sec - min * 60;
    printf("%i", sec);

return 0;
}