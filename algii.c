#include <stdio.h>

int main () {
    int mat[4];
     for (int i = 0; i < 4; i++)
    {
        printf("%d - ", mat[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &mat[i]);
    }

    scanf("%d", &mat[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("%d - ", mat[i]);
    }
    
    
    return 0;
}