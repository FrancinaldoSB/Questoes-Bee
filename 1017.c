#include <stdio.h>
 
int main() {

    float qtd_l, v_m, horas, distancia;
    

    scanf("%f", &horas);

    scanf("%f", &v_m);

    distancia = horas * v_m;

    qtd_l = distancia / 12;

    printf("%.3f\n", qtd_l);
 
    return 0;
}