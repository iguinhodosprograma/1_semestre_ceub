#include <stdio.h>
#include <string.h>

int main()
{
    char p1[20], p2[20], p3[20];
scanf("%s", p1);
scanf("%s", p2);
scanf("%s", p3);

    if(strcmp(p1, "vertebrado") == 0)
        if(strcmp(p2, "ave") == 0)
            if(strcmp(p3, "carnivoro") == 0)
                printf("aguia\n");
        else if(strcmp(p3, "onivoro") == 0 )
        printf("pomba\n");

        if(strcmp(p2, "mamifero") == 0)
            if(strcmp(p3, "onivoro") == 0)
                printf("homem");
        else if (strcmp(p3, "herbivoro") == 0)
        printf("vaca");
        
       
        if(strcmp(p1, "invertebrado") == 0)
            if(strcmp(p2, "inseto") == 0)
                if(strcmp(p3, "hematofago") == 0)
                    printf("pulga");
        else if(strcmp(p3, "herbivoro") == 0)
            printf("lagarta");

        if(strcmp(p2, "anelideo") == 0)
            if(strcmp(p3, "hematofago") == 0)
                printf("sanguessuga");
        else if(strcmp(p3, "onivoro") == 0)
            printf("minhoca");
            

return 0;
}