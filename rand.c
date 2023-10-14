#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x, n, y = 0;

    srand(time(NULL));

    x = rand() % 101;

    while (1)
    {
        printf("Informe um numero: ");
        scanf("%d", &n);

        if (n != x)
        {
            if (n < x)
            {
                printf("Muito pequeno\n");
            }
            else if (n > x)
            {
                printf("Muito Grande\n");
            }
            y++;
            continue;
        }
        else if (n == x)
        {
            printf("Correto\n");
            printf("O total de tentativas foram: %d", y);
            break;
        }
    }

    return 0;
}
