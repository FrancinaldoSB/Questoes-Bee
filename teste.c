#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int array[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        // Troca array[i] e array[j]
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    int bingo[5][5];
    srand(time(NULL));

    // Inicialize um array de números de 1 a 75
    int numerosPossiveis[75];
    for (int i = 0; i < 75; i++) {
        numerosPossiveis[i] = i + 1;
    }

    shuffle(numerosPossiveis, 75); // Embaralhe os números

    int numeroAtual = 0;
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 5; c++) {
            bingo[l][c] = numerosPossiveis[numeroAtual++];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d|", bingo[i][j]); // Use %2d para imprimir números com dois dígitos alinhados
        }
        printf("\n");
    }

    return 0;
}
