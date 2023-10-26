#include <stdio.h>
#define tam 5

int main()
{
    int X[tam], Y[tam], soma[tam], intersecao[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Informe o %d numero de X: ", i + 1);
        scanf("%d", &X[i]);

        printf("Informe o %d numero de Y: ", i + 1);
        scanf("%d", &Y[i]);

        soma[i] = X[i] + Y[i];
    }
    for (int i = 0; i < tam; i++)
    {
        printf("A Soma de %d + %d = %d\n", X[i], Y[i], soma[i]);
    }

    int k = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (X[i] == Y[j])
            {
                intersecao[k] = X[i];
                k++;
                break; // Evita adicionar o mesmo elemento mais de uma vez na interseção
            }
        }
    }
    printf("Interseção entre X e Y:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", intersecao[i]);
    }
    printf("\n");


    return 0;
}