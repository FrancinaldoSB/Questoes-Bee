#include <stdio.h>
 
int main() {

    int valor, notas[7] = {100, 50, 20, 10, 5, 2, 1}, quantidade[7];

    scanf("%d", &valor);

    for (int i = 0; i < 7; i++)
    {
        quantidade[i] = valor / notas[i];
        valor %= notas[i];
    }
    
    printf("%d nota(s) de R$ 100,00\n", quantidade[0]);
    printf("%d nota(s) de R$ 50,00\n", quantidade[1]);
    printf("%d nota(s) de R$ 20,00\n", quantidade[2]);
    printf("%d nota(s) de R$ 10,00\n", quantidade[3]);
    printf("%d nota(s) de R$ 5,00\n", quantidade[4]);
    printf("%d nota(s) de R$ 2,00\n", quantidade[5]);
    printf("%d nota(s) de R$ 1,00\n", quantidade[6]);

 
    return 0;
}