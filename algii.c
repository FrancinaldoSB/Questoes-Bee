#include <stdio.h>
#include <string.h>
#include <ctype.h>

int stricmp(const char str1[],const char str2[]);

int main () {
    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int diferenca = stricmp(str1, str2);

    if (diferenca == 0) {
        printf("As palavras sao iguais, ignorando maiusculas e minusculas.\n");
    } else {
        printf("As palavras sao diferentes. Diferenca ASCII do primeiro caractere diferente: %d\n", diferenca);
    }
    return 0;
}

int stricmp(const char str1[], const char str2[]){
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        char char1 = tolower((unsigned char)str1[i]);
        char char2 = tolower((unsigned char)str2[i]);

        if (char1 != char2)
        {
            return (int)char1 - (int)char2;
        }
        i++;
    }
    return 0;
}