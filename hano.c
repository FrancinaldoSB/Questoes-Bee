#include <stdio.h>

int main()
{
    int a, b, c, soma = 0;

    printf("Informe o Primeiro Numero: ");
    scanf("%d", &a);

    if (a <= 1)
    {
        return 1;
    }

    printf("Informe o Segundo Numero: ");
    scanf("%d", &b);

    printf("Informe o Terceiro Numero: ");
    scanf("%d", &c);

    if (b > c)
    {
        return 1;
    }

    for (int i = b; i < c; i++)
    {
        if (i % a == 0)
        {
            soma += i;
        }
    }

    printf("Soma de Numeros divisiveis por a: %d\n", soma);

    return 0;
}