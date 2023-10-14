#include <stdio.h>
 
int main() {
    double A, B, C, A_T, A_TR, A_C, A_Q, A_R;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    A_T = (A * C)/2;

    A_C = 3.14159 * (C*C);

    A_TR = ((A + B) * C) / 2;

    A_Q = B * B;

    A_R = A * B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", A_T, A_C, A_TR, A_Q, A_R);

    return 0;
}