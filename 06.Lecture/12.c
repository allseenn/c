#include<stdio.h>

int cycle(n)
{
    for (int i = 1; i < n; i++)
        printf("%d ", i);
}

int main()
{
    cycle(5);
    return 0;
}