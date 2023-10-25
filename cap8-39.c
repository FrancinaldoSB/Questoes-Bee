#include <stdio.h>

typedef struct {
    char nome[20];
    float peso;
    int numero;
} Dieta;

void obter_dados(Dieta *r) {
    printf("Digite o nome do Dieta: ");
    scanf("%s", r->nome);
    printf("Digite o N° de Calorias: ");
    scanf("%d", &(r->numero));
    printf("Digite o peso da porcao: ");
    scanf("%f", &(r->peso));
}

void exibir_dados(Dieta *r) {
    printf("Nome: %s\n", r->nome);
    printf("Peso da porcao: %.2f\n", r->peso);
    printf("N° Calorias: %d\n", r->numero);
}

int main() {
    Dieta comidas[10];
    for (int i = 0; i < 10; i++) {
        obter_dados(&comidas[i]);
        exibir_dados(&comidas[i]);
    }
    return 0;
}

