#include <stdio.h>
#define MAX 10
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}


int main () {
    int N = 1, X[MAX], Y[MAX], M_Casa[MAX], Consumo_total = 0, total_moradores = 0, cidade = 0;

    do
    {
        scanf("%d", &N);

        if (N == 0) {
            break;
        }

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &X[i]);
            scanf("%d", &Y[i]);
            M_Casa[i] = Y[i] / X[i];
            Consumo_total += Y[i];
            total_moradores += X[i];
        }
        cidade++;

        qsort(M_Casa, N, sizeof(int), compare);
        qsort(X, N, sizeof(int), compare);

        printf("Cidade# %d\n", cidade);
        for (int i = 0; i < N; i++)
        {
            printf("%d-%d ", X[i], M_Casa[i]);
        }
        printf("\n");
        double Consumo_medio = (double)Consumo_total / total_moradores;
        printf("Consumo medio: %.2lf m3.\n", Consumo_medio);

        free(X);
        free(Y);
        free(M_Casa);
    } while (1);
    return 0;
}