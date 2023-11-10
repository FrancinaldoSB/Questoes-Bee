#include <stdio.h>
#include <string.h>

int main()
{
    char str1[5], str2[5];
    int len, j = 0;

    scanf("%s", str1);
    len = strlen(str1);
    printf("%s\n", str1);

    for (int i = len - 1; i >= 0; i--)
    {
        str2[j] = str1[i];
        j++;
    }

    printf("%s\n", str2);

    if (strcmp(str2, str1) == 0)
    {
        printf("Sao palindromos!");
    }
    else
    {
        printf("Nao sao palindromos!");
    }

    return 0;
}