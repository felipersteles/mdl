#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num)
{
    int i, flag = 0;

    if (num == 0 || num == 1)
    {
        flag = 1;
    }

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        return true;

    return false;
}

bool is_twin_prime(int num)
{
    if (is_prime(num))
    {
        if (is_prime(num + 2) || is_prime(num - 2))
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int testQtd, ini, fim, count;

    printf("Quantidade de testes: ");
    scanf("%d", &testQtd);
    if (testQtd <= 0 || testQtd > 105)
    {
        printf("Numero inválido.");
        return -1;
    }

    for (int i = 0; i < testQtd; i++)
    {
        printf("\nDigite o intervalo: ");
        scanf("%d %d", &ini, &fim);

        count = 0;
        for (int j = ini; j <= fim; j++)
        {
            if (is_twin_prime(j))
            {
                count++;
            }
        }

        printf("\nPrimos gemeos: %d", count);
    }

    return 0;
}