#include <stdio.h>
#include <string.h>

void left(char dest[], char src[], int n) {
    if (n <= 0) {
        dest[0] = '\0'; // Se n for menor ou igual a zero, a string de destino é uma string vazia.
    } else {
        strncpy(dest, src, n);
        dest[n] = '\0'; // Garante que a string de destino seja terminada corretamente.
    }
}

int main() {
    char source[50] = "Esta e uma string de exemplo.";
    char destination[50];
    int n = 10;

    left(destination, source, n);

    printf("Os primeiros %d caracteres de source: %s\n", n, destination);

    return 0;
}
