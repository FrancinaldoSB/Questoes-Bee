#include <stdio.h>

int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Digite o número do termo da sequência de Fibonacci: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);
    printf("O %do termo da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}
