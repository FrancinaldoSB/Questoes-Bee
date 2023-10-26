#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bingo[5][5];

int main()
{
    srand(time(NULL));
    for (int l = 0; l < 5; l++)
    {
        for (int c = 0; c < 5; c++)
        {
            switch (c + 1)
            {
            case 1:
                bingo[l][c] = (rand() % 15) + 1;
                break;
            case 2:
                bingo[l][c] = (rand() % 15) + 16;
                break;
            case 3:
                bingo[l][c] = (rand() % 15) + 31;
                break;
            case 4:
                bingo[l][c] = (rand() % 15) + 46;
                break;
            case 5:
                bingo[l][c] = (rand() % 15) + 61;
                break;
            default:
                break;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d|", bingo[i][j]);
        }
        printf("\n");
    }

    return 0;
}