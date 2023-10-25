#include <stdio.h>
#include <string.h>

int main()
{
    float num1, num2, resultado;
    char tipo;

    printf("Informe o Primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    printf("Informe o Sinal da Conta (+, -, *, /): ");
    scanf(" %c", &tipo);

    switch (tipo)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '/':
        resultado = num1 / num2;
        break;
    default:
        break;
    }
    printf("O Resultado da Conta de %c foi: %.2f ", tipo, resultado);

    return 0;
}