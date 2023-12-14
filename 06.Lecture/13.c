#include <stdio.h>

void cycle(int i, int n)
{
    if (i == n)
        return;
    printf("%d ", i);
    cycle(i + 1, n);
}

int main()
{
    cycle(1, 5);
    return 0;
}