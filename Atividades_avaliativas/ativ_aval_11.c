#include <stdio.h> //Igor Christofidis de Lima   RA:22502008

int main(){
    int A, B; 

scanf("%i %i", &A, &B);

if ((A > B))
    {
        if (A % B == 0)
        {
        printf("Sao multiplos");
        }
        else
        {
        printf("Nao sao multiplos");
        }
    }
    
else if ((B > A))
    {
        if (B % A == 0)
        {
        printf("Sao multiplos");
        }
        else
        {
        printf("Nao sao multiplos");
        }
    }



    return 0;
    }