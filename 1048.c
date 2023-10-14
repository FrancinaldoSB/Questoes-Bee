#include <stdio.h>

int main () {
    double salario, novosalario, reajuste;
    scanf("%lf", &salario);
    if (salario > 0 && salario <= 400)
    {
        reajuste = salario * 0.15;
        novosalario = reajuste + salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15%%", novosalario, reajuste);
    } else if (salario > 400 && salario <= 800)
    {
        reajuste = salario * 0.12;
        novosalario = reajuste + salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", novosalario, reajuste);
    } else if (salario > 800 && salario <= 1200)
    {
        reajuste = salario * 0.1;
        novosalario = reajuste + salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", novosalario, reajuste);
    } else if (salario > 1200 && salario <= 2000)
    {
        reajuste = salario * 0.07;   
        novosalario = reajuste + salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", novosalario, reajuste);
    } else if (salario > 2000)
    {
        reajuste = salario * 0.04;
        novosalario = reajuste + salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", novosalario, reajuste);
    }
    return 0;
}