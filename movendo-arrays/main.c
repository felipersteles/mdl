
#include <stdio.h>

// antes de codificiar eu queria dizer que psicografei tudo isso
// em um papel, mas rlx... nao foi um papel qualquer, foi em um caderno rs

int main()
{
    drawTelesLogo();
    printf("Estudos de um jogo de damas rs");

    return 0;
}

// Implementação baseada em reuso
// codigos tirados do repositorio:
// https://github.com/felipersteles/Estrutura-de-Dados-1.git
// =================================================================

void escreveMatVet(int *matvet, int linha, int coluna)
{

    int i, j;

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            scanf("%d", &matvet[(i * coluna) + j]);
        }
    }
}

void drawTelesLogo()
{
    system("cls");
    system("@echo off");
    system("echo made by Felipe");
    system("echo ------------------------------------------------------");
    system("echo ----------------------------------------------------------------");
    system("echo ----------------------------------------------------------------");
    system("echo ------------------------------------------------------");
    system("echo @@@@@@@  @@@@@@@@  @@@       @@@@@@@@   @@@@@@");
    system("echo @@@@@@@  @@@@@@@@  @@@       @@@@@@@@  @@@@@@@");
    system("echo  @@!    @@!       @@!       @@!       !@@    ");
    system("echo  !@!    !@!       !@!       !@!       !@!    ");
    system("echo  @!!    @!!!:!    @!!       @!!!:!    !!@@!!");
    system("echo  !!!    !!!!!:    !!!       !!!!!:     !!@!!!");
    system("echo  !!:    !!:       !!:       !!:            !:!");
    system("echo  :!:    :!:       :!:       :!:           !:!");
    system("echo  ::     :: ::::   :: ::::   :: ::::  :::: ::");
    system("echo   :     : :: ::   : :: : :  : :: ::   :: : :");
    system("echo ------------------------------------------------------");
    system("echo ----------------------------------------------------------------");
    system("echo ----------------------------------------------------------------");
    system("echo ------------------------------------------------------");
    system("echo My github: felipersteles");
    system("echo ------------------------------------------------------");
    system("echo ----------------------------------------------------------------");
    system("echo ----------------------------------------------------------------");
    system("echo ------------------------------------------------------");
    system("pause");
}