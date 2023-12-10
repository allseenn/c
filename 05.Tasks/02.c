#include <stdio.h>

int nod(int a, int b)
{
    while (1)
    {
        if (a < b)
            b = b - a;
        else if (b < a)
            a = a - b;
        else if (a == b)
            return a;
    }
}

int main()
{
    int a, b;
    printf("Введите два натуральных числа: ");
    scanf("%d%d", &a, &b);
    if (1 > a || b < 1)
    {
        printf("Числа должны быть натуральными!\n");
        return 0;
    }
    printf("%d\n", nod(a, b));
    return 0;
}
