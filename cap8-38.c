#include <stdio.h>

typedef struct {
    char nome[50];
    char endereco[100];
    float preco_medio;
    char tipo_comida[50];
} Restaurante;

void obter_dados(Restaurante *r) {
    printf("Digite o nome do restaurante: ");
    scanf("%s", r->nome);
    printf("Digite o endereço do restaurante: ");
    scanf("%s", r->endereco);
    printf("Digite o preço médio no restaurante: ");
    scanf("%f", &(r->preco_medio));
    printf("Digite o tipo de comida do restaurante: ");
    scanf("%s", r->tipo_comida);
}

void exibir_dados(Restaurante *r) {
    printf("Nome: %s\n", r->nome);
    printf("Endereço: %s\n", r->endereco);
    printf("Preço Médio: %.2f\n", r->preco_medio);
    printf("Tipo de Comida: %s\n", r->tipo_comida);
}

int main() {
    Restaurante restaurantes[10];
    for (int i = 0; i < 10; i++) {
        obter_dados(&restaurantes[i]);
        exibir_dados(&restaurantes[i]);
    }
    return 0;
}
