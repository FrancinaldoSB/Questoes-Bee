#include <stdio.h>

void preencher (int array[], int tam) {
    for (int i = 0; i < tam; i++)
    {
        printf("Informe o %d elemento do array: ", i+1);
        scanf("%d", &array[i]);
    }
}

void exibir(int array[], int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("%d - ", array[i]);
    }
    printf("\n");
}

void inverter(int *array, int tam){
    int *inicio = array;
    int *fim = array + tam - 1, temp;

    while (inicio < fim)
    {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main () {
    int tam;

    printf("Informe o tamanho: ");
    scanf("%d", &tam);

    int array[tam];

    preencher(array, tam);

    exibir(array, tam);

    inverter(array, tam);

    printf("Array apos Inverter: \n");
    
    exibir(array, tam);

    return 0;
}