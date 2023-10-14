#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Limpe o caractere de nova linha (\n) do buffer de entrada
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    char *token = strtok(frase, " ");

    while (token != NULL) {
        printf("Palavra: %s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
