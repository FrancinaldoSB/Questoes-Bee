#include <stdio.h>

int main () {

    char nome[20];
    double salario, numv, total;

    getchar();
    gets(nome);

    scanf("%lf", &salario);

    scanf("%lf", &numv);

    total = salario + (numv * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}