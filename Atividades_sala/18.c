#include <stdio.h>

int main(){
    int x, y, z;

scanf("%i %i %i", &x, &y, &z);

    if ((x > y && y > z))
    {
        printf("%i\n%i\n%i\n", z, y, x);
    }
    
    else if ((y > x && x > z))
    {
        printf("%i\n%i\n%i\n", z, x, y);
    }
    
        else if ((x > z && z > y))
    {
        printf("%i\n%i\n%i\n", y, z, x);
    }

        else if ((z > x && x > y))
    {
        printf("%i\n%i\n%i\n", y, x, z);
    }

        else if ((z > y && y > x))
    {
        
        printf("%i\n%i\n%i\n", x, y, z);
    }

        else if ((y > z && z > x))
    {
        printf("%i\n%i\n%i\n", x, z, y);
    }

printf("\n%i\n%i\n%i", x, y, z);

return 0;

}