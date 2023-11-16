#include <stdio.h>

void Troca(int *a, int *x);

int main () {
    int x = 1, y = 2;

    Troca(&x, &y);

    printf("X = %d\nY = %d\n", x, y);
    
    return 0;
}

void Troca(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}