#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, sum = 0;
START:
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a < 0)
        a *= -1;
    if (b < 0)
        b *= -1;
    if (a > 99 || b > 99)
    {
        printf("Numbers must be less than 100\n");
        goto START;
    }
    for (int i = a; i <= b; i++)
        sum += (i * i);
    printf("%d\n", sum);
    return 0;
}
