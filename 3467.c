#include <stdio.h>
#include <string.h>

int main() {
    char sofa[4]; // Array para armazenar a configuração do sofá

    while (scanf("%s", sofa) != EOF) {
        if (strcmp(sofa, "xxL") == 0) {
            printf("Esse eh o meu lugar\n");
        } else {
            printf("Oi, Leonard\n");
        }
    }

    return 0;
}
