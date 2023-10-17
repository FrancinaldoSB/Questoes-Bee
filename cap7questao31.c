#include <stdio.h>

int procurarchar(char str[], char ch);

int main() {
    char string[100], caractere;
    
    printf("Digite uma palavra: ");
    scanf("%s", string);

    printf("Digite a letra a ser procurada: ");
    scanf(" %c", &caractere);

    int indice = procurarchar(string, caractere);

    if (indice != -1) {
        printf("A letra '%c' foi encontrada na posicao: %d\n", caractere, indice);
    } else {
        printf("A letra '%c' nao foi encontrada.\n", caractere);
    }

    return 0;
}

int procurarchar(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i + 1;
        }
    }
    return -1;
}
