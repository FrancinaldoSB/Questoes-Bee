#include <stdio.h>
#include <string.h>

int main () {
    
    char jogo[4];

    while (scanf("%s", jogo) != EOF) {
        if (strcmp(jogo, "XOX") == 0) {
            printf("*\n");
        } else if (strcmp(jogo, "XXO") == 0)
        {
            printf("Alice\n");
        } else if (strcmp(jogo, "XOO") == 0)
        {
            printf("Bob\n");
        } else 
        {
            printf("?\n");
        }
        
    }

    return 0;
}