#include <stdio.h>

struct Mes
{
    char nome[20];
    char abreviacao[4];
    int dias;
};

int calcularTotalDias(struct Mes meses[], int numeroDoMes)
{
    int totalDias = 0;

    for (int i = 0; i < numeroDoMes; i++)
    {
        totalDias += meses[i].dias;
    }

    return totalDias;
}

int main()
{
    struct Mes meses[12] = {
        {"Janeiro", "Jan", 31},
        {"Fevereiro", "Fev", 28},
        {"Março", "Mar", 31},
        {"Abril", "Abr", 30},
        {"Maio", "Mai", 31},
        {"Junho", "Jun", 30},
        {"Julho", "Jul", 31},
        {"Agosto", "Ago", 31},
        {"Setembro", "Set", 30},
        {"Outubro", "Out", 31},
        {"Novembro", "Nov", 30},
        {"Dezembro", "Dez", 31}};

    int numeroDoMes = 3; // Exemplo: para calcular o total até março
    int totalDias = calcularTotalDias(meses, numeroDoMes);

    printf("Total de dias até o mês %s: %d dias\n", meses[numeroDoMes - 1].nome, totalDias);

    return 0;
}
