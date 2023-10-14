#include <stdio.h>

int main () {
    double a, b, c, d;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a) {
        d = a + b + c;
        printf("Perimetro = %.1f\n", d);
    } else
    {
        d = ((a + b)*c) / 2;
        printf("Area = %.1lf\n", d);
    }
}