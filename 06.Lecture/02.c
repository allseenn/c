#include <stdio.h>

unsigned int factorial(unsigned int n)
{
    if (n <=1)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    printf("%d", factorial(6));
    return 0;
}
