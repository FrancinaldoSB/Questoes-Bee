#include <stdio.h>
#include <string.h>

void strinv(char str1[]);

int main () {
    char string[20];
    printf("Informe a Palavra: ");
    scanf("%s", string);
    strinv(string);
    return 0;
}

void strinv(char str1[]) {
    int a;
    a = strlen(str1);
    for (int i = a; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }
    
}