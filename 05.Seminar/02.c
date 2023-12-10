#include <stdio.h>
unsigned long long int factorial(int n)
{
    int i;
    unsigned long long int res = 1;
    for (i = 1; i <= n; i++)
        res *= i;
    return res;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%llu\n", factorial(n));
    return 0;
}

