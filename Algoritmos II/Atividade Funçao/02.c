#include <stdio.h>

void preencher_mat(float mat[][5], int tam)
{
    int l, c;
    for (l = 0; l < tam; l++)
    {
        printf("Aluno %d:\n", l + 1);
        for (c = 0; c < 4; c++)
        {
            if (c == 0)
            {
                printf("Informe a Matricula: ");
                scanf("%f", &mat[l][c]);
            }
            else
            {
                printf("Informe a %d Nota: ", c);
                scanf("%f", &mat[l][c]);
            }
        }
        mat[l][4] = 0;
    }
}

void media(float mat[][5], int tam)
{
    for (int l = 0; l < tam; l++)
    {
        for (int c = 0; c < 4; c++)
        {
            if (c != 0)
            {
                mat[l][4] += mat[l][c];
            }
        }
        mat[l][4] = mat[l][4] / 3;
    }
}

void exibir(float mat[][5], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0)
            {
                printf("%.0f ", mat[i][j]);
            }
            else
            {
                printf("%.2f ", mat[i][j]);
            }
        }
        printf("\n");
    }
}




void atualizacao_dados(float mat[][5], int tam)
{
    int l, c, procurar;
    printf("Informe a Matricula: ");
    scanf("%d", &procurar);
    for (l = 0; l < tam; l++)
    {
        for (c = 0; c < 4; c++)
        {
            if (procurar == mat[l][0])
            {
                if (c != 0)
                {
                    printf("Informe a nova %d nota do aluno %d: ", c, l+1);
                    scanf("%f", &mat[l][c]);
                    mat[l][4] = 0;
                }
            }
        }
    }
    media(mat, tam);
}

int menu(int op)
{
    printf("---------MENU---------\n\n");
    printf("1 - Preencher Fichario\n");
    printf("2 - Atualizar Dados\n");
    printf("3 - Exibir Fichario\n");
    printf("4S - Sair\n");
    printf("Informe sua opcao: ");
    scanf("%d", &op);

    return op;
}

int main()
{
    int tam, op = 0;
    printf("Informe quantos Alunos vao ser adicionados: ");
    scanf("%d", &tam);

    float mat[tam][5];

    do
    {
        op = menu(op);
        switch (op)
        {
        case 1:
            preencher_mat(mat, tam);
            media(mat, tam);
            break;
        case 2:
            atualizacao_dados(mat, tam);
            break;
        case 3:
            exibir(mat, tam);
            break;
        default:
            break;
        }
    } while (op != 4);

    return 0;
}