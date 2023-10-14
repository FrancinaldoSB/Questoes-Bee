#include <stdio.h>

int main()
{
    double N1, N2, N3, N4, media, NF;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    
    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;

    printf("Media: %.1lf\n", media);
    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5.0 && media < 7.0)
    {
        scanf("%lf", &NF);
        printf("Nota do exame: %.1lf\n", NF);
        media = (media + NF) / 2;
        if (media >= 5.0)
        {
            printf("Aluno aprovado.\nMedia final: %.1lf\n", media);
        }
        else if (media < 5.0)
        {
            printf("Aluno reprovado.\nMedia final: %.1lf\n", media);
        }
    }

    return 0;
}