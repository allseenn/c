#include <stdio.h>

unsigned int factorial(unsigned int n)
{
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    printf("%d", factorial(6));
    return 0;
}
