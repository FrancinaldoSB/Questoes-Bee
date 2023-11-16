#include <stdio.h>
#include <string.h>

void count_caracteres(char array[], int *count, char *letra){
    int fim = strlen(array);

    for (int i = 0; i < fim; i++)
    {
        if (*letra == array[i])
        {
            *count = *count + 1;
        }
    }
}

int main () {
    char array[10], letra;
    int count = 0;
    printf("Informe a palavra: ");
    scanf("%s", array);

    printf("Informe o caractere que deseja: ");
    scanf(" %c", &letra);


    count_caracteres(array, &count, &letra);

    printf("Quantidade de letras repetidas: %d", count);

    return 0;
}