#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, rev = 0;
    printf("Enter any number: ");
    scanf("%d", &a);
    if (a < 0)
        a *= -1;
    while (a > 0)
    {
        rev += a % 10;
        if (a > 9)
        {
            rev *= 10;
        }
        a /= 10;
    }
    printf("%d\n", rev);
    return 0;
}
