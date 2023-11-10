#include <stdio.h>
#define tam 12

int main() {
    int i, j, aux = 0;
    double mat[12][12], media = 0;
    char op;

    scanf(" %c", &op);

    for (i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (i < j)
            {
                media += mat[i][j];
                aux++;
            }
        }
    }
    
    
    if (op == 'M')
    {
        media = media / aux;
        printf("%.1lf\n", media);
    } else if (op == 'S')
    {
        printf("%.1lf\n", media);
    }

}