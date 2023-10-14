#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main () {
    int a[3], b[3];
     int tamanho = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    qsort(a, tamanho, sizeof(int), comparar);
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", b[i]);
    }
    

    return 0;
}