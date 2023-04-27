
#include <stdio.h>
#include <stdlib.h>

// antes de codificiar eu queria dizer que psicografei tudo isso
// em um papel, mas rlx... nao foi um papel qualquer, foi em um caderno rs

int *cria_matrix(int linha, int coluna);
void printa_matrix(int **mat, int linha, int coluna);
void verificarMovimentos(int x, int y, int **mat, int linha, int coluna);

int main()
{
    system("cls");
    system("echo ------------------------------------------------------");
    system("echo ----------------------------------------------------------------");
    system("echo made by Felipe");
    system("echo rs");
    system("echo --------------------------------------------------");
    system("echo ----------------------------------------------");
    system("echo @@@@@@@  @@@@@@@@  @@@       @@@@@@@@   @@@@@@");
    system("echo @@@@@@@  @@@@@@@@  @@@       @@@@@@@@  @@@@@@@");
    system("echo  @@!    @@!       @@!       @@!       !@@    ");
    system("echo  !@!    !@!       !@!       !@!       !@!    ");
    system("echo  @!!    @!!!:!    @!!       @!!!:!    !!@@!!");
    system("echo  !!!    !!!!!:    !!!       !!!!!:     !!@!!!");
    system("echo  !!:    !!:       !!:       !!:            !:!");
    system("echo  :!:    :!:       :!:       :!:           !:!");
    system("echo   ::     :: ::::   :: ::::   :: ::::  :::: ::");
    system("echo    :     : :: ::   : :: : :  : :: ::   :: : :");
    system("echo ---------------------------------------------");
    system("echo ----------------------------------------");

    // inicio dos estudos
    printf("Estudos de um jogo de damas rs");

    // Todo: Primeiro: alocar uma matrix 5x5
    int i, j, n = 6, m = 6, valor;

    int **matrix = malloc(n * sizeof(int *));
    for (i = 0; i < 5; i++)
    {
        matrix[i] = malloc(m * sizeof(int *));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matrix[i][j] = 0;
        }
    }

    matrix[4][1] = 1;
    matrix[3][2] = 2;
    matrix[1][4] = 2;

    // todo: Segundo: Receber input
    int x, y;

    int menu = -1;
    while (menu != 0)
    {
        printf("Menu:");
        scanf("%d", &menu);

        printa_matrix(matrix, n, m);
        printf("\nSrc x e y: ");
        scanf("%d%d", &x, &y);
        verificarMovimentos(x, y, matrix, n, m);
        printa_matrix(matrix, n, m);
        break;
    }

    // todo: Alterando os valores conforme o funcionamento de um jogo de damas

    // validar se memoria esta de fato alocada
    // antes de desalocar
    free(matrix);

    system("@echo off");
    system("echo .... My github: felipersteles .........");
    system("echo ------------------------------------------------------");
    system("echo ----------------------------------------------------------------");
    return 0;
}

// Implementação baseada em reuso
// codigos tirados do repositorio:
// https://github.com/felipersteles/Estrutura-de-Dados-1.git
// =================================================================

void verificarMovimentos(int x, int y, int **mat, int linha, int coluna)
{

    printf("[%d][%d] = %d", x, y, mat[x][y]);
    int valor;

    if (mat[x][y] == 1)
    {
        if (mat[x - 1][y + 1] == 0)
        {
            printf("\npos possivel: [%d][%d] = %d", x - 1, y + 1, mat[x - 1][y + 1]);
            mat[x - 1][y + 1] = 8;
        }

        if (mat[x - 1][y + 1] == 2 && mat[x - 2][y + 2] == 0)
        {
            printf("\n[%d][%d] = %d\n", x - 2, y + 2, mat[x - 2][y + 2]);
            verificarMovimentos(x - 1, y + 1, mat, linha, coluna);
        }
    }

    printa_matrix(mat, linha, coluna);
}

void printa_matrix(int **mat, int linha, int coluna)
{
    int i, j;

    printf("\n");
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("| [%d][%d]%d | ", i, j, mat[i][j]);
        }
        printf("\n");
    }
}