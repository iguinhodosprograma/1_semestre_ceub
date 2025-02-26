#include <stdio.h>
int main(){
   double raio, pi, area; //double para numero com virgula
pi = 3.14159;
    printf("Quanto vale o raio da sua circunferencia?");
scanf ("%lf", &raio);
area = raio*raio*pi;
    printf("a area da sua circunferencia vale: A=%.4lf\n", area);//lf limita as casas apos a virgula
return 0;

}
