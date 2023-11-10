#include <stdio.h>

int main() {
    int  linha, i, j;
    double mat[12][12], media = 0;
    char op;

    scanf("%d", &linha);
    scanf(" %c", &op);

    for (i = 0; i < 12; i++)
    {
        for ( j = 0; j < 12; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
        {
            media += mat[i][linha];
        }

    if (op == 'M')
    {
        media = media / 12;
        printf("%.1lf\n", media);
    } else if (op == 'S')
    {
        printf("%.1lf\n", media);
    }

}