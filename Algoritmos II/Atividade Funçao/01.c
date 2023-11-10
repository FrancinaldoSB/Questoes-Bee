#include <stdio.h>

void preencher(float vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("Informe o numero da posicao vet[%d]: ", i);
        scanf("%f", &vet[i]);
    }
    printf("\n");
}

void exibir_vet(float vet[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%.2f ", vet[i]);
    }
    printf("\n");
}

int menu(int op)
{
    printf("---------MENU---------\n\n");
    printf("1 - Calcular o MAIOR elemento do Vetor A\n");
    printf("2 - Calcular o MENOR elemento do Vetor B\n");
    printf("3 - Calcular SOMA e MEDIA do Vetor A\n");
    printf("4 - Calcular SOMA e MEDIA do Vetor B\n");
    printf("5 - Montar o Vetor C, que e a soma dos vetores A e B e escrever os elementos do Vetor C\n");
    printf("6 - Escrever os elementos do Vetor A\n");
    printf("7 - Escrever os elementos do Vetor B\n");
    printf("8 - Sair\n");
    printf("Informe sua opcao: ");
    scanf("%d", &op);

    return op;
}

int maior_elemento(float vet[], int tam){
    float maior = vet[0];
    for (int i = 1; i < tam; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }      
    }
    return maior;
}

int menor_elemento(float vet[], int tam){
    float menor = vet[0];
    for (int i = 1; i < tam; i++)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
        }
    }
    return menor;
}

float soma_media(float vet[], int tam){
    float soma_Media;
    for (int i = 0; i < tam; i++)
    {
        soma_Media += vet[i];
    }
    printf("%.2f", soma_Media);

    return soma_Media;
}

void soma_vetores(float vet1[], float vet2[], int tam){
    float vet_soma[tam];
    for (int i = 0; i < tam; i++)
    {
        vet_soma[i] = vet1[i] + vet2[i];
    }
    exibir_vet(vet_soma, tam);
}

int main()
{
    int tam = 100, op = 0;
    float vet1[tam], vet2[tam], maior, menor, media;

    preencher(vet1, tam);
    preencher(vet2, tam);

    do
    {
        op = menu(op);
        switch (op)
        {
        case 1:
            maior = maior_elemento(vet1, tam);
            printf("O Maior elemento de Vetor A e: %.2f\n", maior);
            break;
        case 2:
            menor = menor_elemento(vet2, tam);
            printf("O Menor elemento de Vetor B e: %.2f\n", menor);
            break;
        case 3:
            printf("A Soma dos elementos do Vetor A e: ");
            media = soma_media(vet1, tam) / tam;
            printf("\nA Media do elementos do Vetor A e: %.2f\n", media);
            break;
        case 4:
            printf("A Soma dos elementos do Vetor A e: ");
            media = soma_media(vet2, tam) / tam;
            printf("\nA Media do elementos do Vetor A e: %.2f\n", media);
            break;
        case 5:
            printf("Vetor C: ");
            soma_vetores(vet1, vet2, tam);
            break;
        case 6:
            printf("Vetor A\n");
            exibir_vet(vet1, tam);
            break;
        case 7:
            printf("Vetor B\n");
            exibir_vet(vet2, tam);
            break;
        default:
            break;
        }
    } while (op != 8);

    return 0;
}