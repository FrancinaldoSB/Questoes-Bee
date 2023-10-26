#include <stdio.h>

int main () {
    int mat[4][4], cont = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Informe o numero da linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
            if (mat[i][j] > 10)
            {
                cont++;
            }
        }
    }
    
    printf("A matriz 4 x 4 tem %d numeros maiores que 10.", cont);


    return 0;
}