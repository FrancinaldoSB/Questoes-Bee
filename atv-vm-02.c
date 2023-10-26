#include <stdio.h>

int main()
{
    float num_reais[5];
    int cod = 55;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe um numero: ");
        scanf("%f", &num_reais[i]);
    }

    while (cod != 0)
    {
        printf("1 - Ordem Normal\n2 - Ordem Inversa\n 0 - Sair\nDigite Sua Opcao: ");
        scanf("%d", &cod);

        switch (cod)
        {
        case 1:
            printf("\n[");
            for (int i = 0; i < 5; i++)
            {
                printf("%.1f-", num_reais[i]);
            }
            printf("]\n");
            break;
        case 2:
            printf("\n[");
            for (int i = 4; i >= 0; i--)
            {
                printf("%.1f-", num_reais[i]);
            }
            printf("]\n");
            break;
        case 0:
            printf("Saindo da Aplicacao...\n");
            break;

        default:
            printf("Opcao Invalida!\n");
            break;
        }
    }
    return 0;
}