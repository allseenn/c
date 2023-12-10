#include <stdio.h>

int grain(int pis)
{
    int sum = 1;
    for (int i = 1; i < pis; i++)
    {
        sum *= 2;
    }
    return sum;
}

int main()
{
    int cell;
    printf("Введите номер клетки: ");
    scanf("%d", &cell);
    if (1 > cell || cell > 64)
    {
        printf("Нет такой клетки!\n");
        return 0;
    }
    printf("%d\n", grain(cell));
    return 0;
}
