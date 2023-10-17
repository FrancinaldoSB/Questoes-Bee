#include <stdio.h>

void strnset(char str[], char ch, int n) {
    if (n <= 0) {
        return;  // Não faz nada se n for menor ou igual a zero
    }

    for (int i = 0; str[i] != '\0' && n > 0; i++) {
        str[i] = ch;
        n--;
    }
}

int main() {
    char minhaString[50] = "Olá, Mundo!";
    char caractere = '#';
    int n = 8;

    printf("Antes da chamada à função: %s\n", minhaString);
    
    strnset(minhaString, caractere, n);

    printf("Depois da chamada à função: %s\n", minhaString);

    return 0;
}
