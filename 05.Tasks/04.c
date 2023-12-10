#include <stdio.h>

int summa(int a)
{
    int sum = 0;
    for (int i = 0; i <= a; i++)
        sum += i;
    return sum;
}

int main()
{
    int a;
    printf("Введите натуральное число: ");
    scanf("%d", &a);
    if (1 > a)
    {
        printf("Число должно быть натуральными!\n");
        return 0;
    }
    printf("%d\n", summa(a));
    return 0;
}
