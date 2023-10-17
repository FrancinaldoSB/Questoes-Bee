#include <stdio.h>

int replace(char char1[], char atual, char novo);

int main () {
    char palavra[20], c_atual, c_novo;

    printf("Digite sua palavra: ");
    scanf("%s", palavra);
    printf("Informe o caractere a ser substituido: ");
    scanf(" %c", &c_atual);
    printf("Informe o novo caractere: ");
    scanf(" %c", &c_novo);

    int count = replace(palavra, c_atual, c_novo);

    printf("%s\n", palavra);
    printf("%d\n", count);
    return 0;
}

int replace(char char1[], char atual, char novo){
    int sub = 0;
    for (int i = 0; char1[i] != '\0'; i++)
    {
        if (char1[i] == atual)
        {
            char1[i] = novo;
            sub++;
        }
    }
    return sub;
}