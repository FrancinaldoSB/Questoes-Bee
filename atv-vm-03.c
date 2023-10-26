#include <stdio.h>

int main()
{
    int nums[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if ((nums[i] % 2) == 0)
        {
            continue;
        }
        else
        {
            printf("Impar - %d\nPosicao - %d\n", nums[i], i + 1);
        }
    }

    return 0;
}