#include <stdio.h>

void preencher (int array[], int tam) {
    for (int i = 0; i < tam; i++)
    {
        printf("Informe o %d elemento do array: ", i+1);
        scanf("%d", &array[i]);
    }
}

void maior_elemento(int array[], int tam, int *maior){
    *maior = array[0];
    for (int i = 1; i < tam; i++)
    {
        if (array[i] > *maior)
        {
            *maior = array[i];
        }
    }
    
}

int main () {
    int tam, maior;
    printf("Informe o tamanho do array: ");
    scanf("%d", &tam);

    int array[tam];

    preencher(array, tam);

    maior_elemento(array, tam, &maior);

    printf("Maior Elemento do array eh: %d", maior);
    return 0;
}