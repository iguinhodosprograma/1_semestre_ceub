#include <stdio.h> // Igor Christofidis de Lima    RA: 22502008

int main(){
    float raio, pi, volume;

    printf("qual eh o valor do raio? ");
    scanf("%f", &raio);
    pi = 3.14159;
    volume = ((4/3.0) * pi * raio * raio * raio);

    printf("VOLUME = %.3f", volume);

return 0;
}