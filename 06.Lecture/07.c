#include <stdio.h>

int sumRec(int num)
{
    if (num <= 0)
        return 0;
    return num % 10 + sumRec(num / 10);
}

int main()
{
    printf("%d\n", sumRec(12345));
    return 0;
}