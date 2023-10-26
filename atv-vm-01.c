#include <stdio.h>

int main()
{
    float vet[4], media = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("Informe a %d Nota: ", i + 1);
        scanf("%f", &vet[i]);
        media += vet[i];
    }
    media = media / 4;
    printf("Media do aluno foi: %.2f", media);
}