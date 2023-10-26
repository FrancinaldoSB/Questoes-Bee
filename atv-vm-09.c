#include <stdio.h>

int main()
{
    float matriz[3][9], soma_impares = 0, media = 0;
    int l, c, cont = 0;
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 9; c++)
        {
            printf("Informe o %d numero da linha %d: ",c+1, l+1);
            scanf("%f", &matriz[l][c]);
        }
    }
    
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 9; c++)
        {
            if(((c+1) % 2) == 0) {
                continue;
            } else
            {
                soma_impares += matriz[l][c];   
            }
        }
    }
    

    
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 9; c++)
        {
            if ((c+1) == 2)
            {
                media = media + matriz[l][c];
                cont++;
            } else if ((c+1) == 4)
            {
                media = media + matriz[l][c];
                cont++;
            }
        }
    }
    media = media / cont;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%.2f|", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA soma dos elementos das colunas impares sao: %.2f\n", soma_impares);
    printf("A media das coluna 2 e 4 sao: %.2f\n", media);
    return 0;
}