#include <stdio.h>

int main () {

    
    double area, raio, r =  3.14159;

    scanf("%lf", &raio);

    area = r * (raio * raio);

    printf("A=%.4lf\n", area);

    return 0;
}