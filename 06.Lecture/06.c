#include <stdio.h>

int sumIter(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{
    printf("%d\n", sumIter(1234));
    return 0;
}