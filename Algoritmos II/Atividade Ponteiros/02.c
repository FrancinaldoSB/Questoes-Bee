#include <stdio.h>
#include <string.h>

int isPalindromo(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) 
    {
        if (*start != *end) 
        {
            return 1;
        }
        start++;
        end--;
    }
    
    return 0;
}

int main()
{
    char nome[20];
    int i;

    printf("Informe a palavra:");
    scanf("%s", nome);

    printf("%s\n", nome);

    i = isPalindromo(nome);

    printf("%s\n", nome);
    printf("I = %d\n", i);
    if (i == 0)
    {
        printf("E Palindromo!\n");
    }
    else
    {
        printf("Nao e Palindromo!\n");
    }

    return 0;
}