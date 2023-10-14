#include <stdio.h>
#include <math.h>

int main() {
    double total;
    int n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m5, m1c;

    scanf("%f", &total);

    n100 = (int)total / 100;
    total = fmod(total, 100);

    n50 = (int)total / 50;
    total = fmod(total, 50);

    n20 = (int)total / 20;
    total = fmod(total, 20);

    n10 = (int)total / 10;
    total = fmod(total, 10);

    n5 = (int)total / 5;
    total = fmod(total, 5);

    n2 = (int)total / 2;
    total = fmod(total, 2);

    m1 = (int)total / 1;
    total = fmod(total, 1);

    m50 = (int)(total / 0.5);
    total = fmod(total, 0.5);

    m25 = (int)(total / 0.25);
    total = fmod(total, 0.25);

    m10 = (int)(total / 0.1);
    total = fmod(total, 0.1);

    m5 = (int)(total / 0.05);
    total = fmod(total, 0.05);

    m1c = (int)(total / 0.01);
    printf("NOTAS:\n");
    printf("%d nota (s) de R$ 100.00\n", n100);
    printf("%d nota (s) de R$ 50.00\n", n50);
    printf("%d nota (s) de R$ 20.00\n", n20);
    printf("%d nota (s) de R$ 10.00\n", n10);
    printf("%d nota (s) de R$ 5.00\n", n5);
    printf("%d nota (s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda (s) de R$ 1.00\n", m1);
    printf("%d moeda (s) de R$ 0.50\n", m50);
    printf("%d moeda (s) de R$ 0.25\n", m25);
    printf("%d moeda (s) de R$ 0.10\n", m10);
    printf("%d moeda (s) de R$ 0.05\n", m5);
    printf("%d moeda (s) de R$ 0.01\n", m1c);

    return 0;
}
