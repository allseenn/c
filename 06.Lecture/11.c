#include<stdio.h>

unsigned int factorial(unsigned int n)
{
    if (n <= 1) // условие выходы
        return 1;
    return n * factorial(n - 1); // Шаг
}

int main()
{
    printf("%d\n", factorial(5));
    return 0;
}
