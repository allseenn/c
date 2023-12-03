#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number with 3 digits: ");
    scanf("%d", &a);
    if (a < 0)
        a *= -1;
    if (a > 99 && a < 1000)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
