 #include <stdio.h>
 
int main() {

    int cod[1], qtd[1];
    float valor[1], total = 0;

    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &cod[i]);

        scanf("%d", &qtd[i]);

        scanf("%f", &valor[i]);

        total = total + (valor[i] * qtd[i]);
    }

    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
 
    return 0;
}