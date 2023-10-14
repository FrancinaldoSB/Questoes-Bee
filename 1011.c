#include <stdio.h>
 
int main() {

    double r = 3.14159, R, volume;

    scanf("%lf", &R);

    volume = (4/3.0) * r * (R * R * R);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}