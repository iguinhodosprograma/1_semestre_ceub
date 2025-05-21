#include <stdio.h>
int main(){
int x, y;

while (x != y)
{
    scanf("%d %d", &x, &y);
    if(x > y){
        printf("Descrescente\n");
    } 
    else if (x < y){
        printf("Crescente\n");
    }
}
return 0;
}