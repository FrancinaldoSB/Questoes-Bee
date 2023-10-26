#include <stdio.h>
#define tam 10
int main()
{
    int nums[tam];
    int unicos[tam]; // Um novo vetor para armazenar os elementos únicos
    int contador = 0;

    for (int i = 0; i < tam; i++)
    {
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        int repetido = 0;
        for (int j = 0; j < i; j++)
        {
            if (nums[i] == nums[j])
            {
                repetido = 1;
                break;
            }
        }
        if (!repetido)
        {
            unicos[contador] = nums[i];
            contador++;
        }
    }

    printf("Elementos únicos no vetor: ");
    for (int i = 0; i < contador; i++)
    {
        printf("%d ", unicos[i]);
    }
    printf("\n");

    return 0;
}