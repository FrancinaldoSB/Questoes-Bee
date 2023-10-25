#include <stdio.h>
#include <string.h>
struct Mes
{
    char nome[20];
    char abreviacao[4];
    int dias;
};

int calcularTotalDias(struct Mes meses[], char mes[], int mes_num)
{
    int totalDias = 0;
    if (strlen(mes) > 2)
    {
        for (int i = 0; i < 12; i++)
        {
            if (strlen(mes == 3))
            {
                if (strcmp(meses[i].abreviacao, mes) == 0)
                {
                    totalDias += meses[i].dias;
                    break;
                }
            }
            else if (strcmp(meses[i].nome, mes) == 0)
            {
                totalDias += meses[i].dias;
                break;
            }
            totalDias += meses[i].dias;
        }
    } else if (mes_num != 0)
    {
        for (int i = 0; i < mes_num; i++)
        {
            totalDias += meses[i].dias;
        }
    } else
    {
        printf("Dados Invalidos!");
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
    char mes[20];
    int dia, ano, mes_num = 0, totalDias;
    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mês (número, nome ou abreviação): ");
    scanf("%s", mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (strlen(mes) > 2)
    {
        totalDias = calcularTotalDias(meses, mes, mes_num);
    }
    else
    {
        sscanf(mes, "%d", &mes_num);
        totalDias = calcularTotalDias(meses, mes, mes_num);
    }

    printf("O Total de Dias do Ano %d ate a data foi: %d", ano, totalDias - dia);

    return 0;
}
