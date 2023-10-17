#include <stdio.h>
#include <string.h>

void strins(char char1[], char a, int b);

int main() {
    char str1[20], a;
    int b;
    printf("Informe a Palavra: ");
    scanf("%s", str1);
    printf("Informe a posicao da Letra: ");
    scanf("%d", &b);
    printf("Informe a nova letra: ");
    scanf(" %c", &a);

    strins(str1, a, b);

    printf("Nova Palavra: %s\n", str1);
    
    return 0;
}

void strins(char char1[], char a, int b){
    int c = strlen(char1);
    for (int i = 0; i < c; i++)
    {
        if (i == b-1)
        {
            char1[i] = a;
        }
    }
}