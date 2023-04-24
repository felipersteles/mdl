#include <stdio.h>

int main()
{
    int num;

    printf("Num de lados: ");
    scanf("%d", &num);
    if (num > 105 || num < 3)
    {
        printf("Número fora do domínio");
        return -1;
    }

    // formaula para calcular
    // o numero de diagonais
    // em um poligono
    int res = num * (num - 3) / 2;
    printf("%d", res);

    return 0;
}