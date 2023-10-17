#include <stdio.h>
#include <string.h>

void right(char str1[], char str2[], int pos) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    if (pos < 0 || pos > length1) {
        // Posição inválida, não faz nada
        return;
    }

    // Desloca os caracteres à direita de str1 para abrir espaço para str2
    for (int i = length1; i >= pos; i--) {
        str1[i + length2] = str1[i];
    }

    // Insere str2 à direita de str1 na posição desejada
    for (int i = 0; i < length2; i++) {
        str1[pos + i] = str2[i];
    }
}
int main() {
    char str1[50], str2[50];
    int posicao;

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%d", &posicao);

    printf("str1 antes da inserção: %s\n", str1);

    right(str1, str2, posicao);

    printf("str1 depois da inserção: %s\n", str1);

    return 0;
}
