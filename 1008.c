#include <stdio.h>
 
int main() {
 
    int Num, Hora;
    float qtdh, salary;

    scanf("%d", &Num);

    scanf("%d", &Hora);
 
    scanf("%f", &qtdh);

    salary = qtdh * Hora;

    printf("NUMBER = %d\nSALARY = U$%.2f\n", Num, salary);
    return 0;
}