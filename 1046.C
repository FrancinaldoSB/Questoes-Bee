#include <stdio.h>

int main()
{
    int i, f, d;
    scanf("%d %d", &i, &f);
    d = f - i;
    if (d < 0)
    {
        d+=24;
    }
    if (i == f)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (d >= 1 && d <= 24)
    {
        printf("O JOGO DUROU %d HORA(S)\n", d);
    }
    return 0;
}