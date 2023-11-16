#include <stdio.h>
#include <string.h>

int main()
{
    char op[10], op2[10], op3[10];

    scanf("%s", op);
    scanf("%s", op2);
    scanf("%s", op3);

    if (strcmp(op, "vertebrado") == 0)
    {
        if (strcmp(op2, "ave") == 0)
        {
            if (strcmp(op3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else if (strcmp(op3, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
        else if (strcmp(op2, "mamifero") == 0)
        {
            if (strcmp(op3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else if (strcmp(op3, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(op, "invertebrado") == 0)
    {
        if (strcmp(op2, "inseto") == 0)
        {
            if (strcmp(op3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else if (strcmp(op3, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        else if (strcmp(op2, "anelideo") == 0)
        {
            if (strcmp(op3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else if (strcmp(op3, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
