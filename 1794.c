#include <stdio.h>

int main () {
    int LA, LB, SA, SB, N;

    scanf("%d", &N);

    scanf("%d %d", &LA, &LB);

    scanf("%d %d", &SA, &SB);

    if (N >= LA && N <= LB && N >= SA && N <= SB)
    {
        printf("possivel\n");
    } else
    {
        printf("impossivel\n");
    }
    
    return 0;
}