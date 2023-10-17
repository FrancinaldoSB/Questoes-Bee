#include <stdio.h>

void strnset(char str[], char ch, int n);

int main() {
    char string[20], caractere;
    int n;

    printf("Digite o caractere: ");
    scanf(" %c", &caractere);

    printf("Digite o numero de vezes que o caractere deve ser repetido: ");
    scanf("%d", &n);

    strnset(string, caractere, n);

    printf("String: %s\n", string);

    return 0;
}

void strnset(char str[], char ch, int n) {
    for (int i = 0; i < n; i++) {
        str[i] = ch;
    }
    str[n] = '\0';
}
