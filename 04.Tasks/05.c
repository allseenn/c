#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    START:
    printf("Enter a number greater than 10: ");
    scanf("%d", &a);
    if(a <= 10) goto START;
    for (int i = 11; i <= a; i++)
    {
        int sum = 0;
        int mult = 1;
        int b = i;
        while (b > 0)
        {
            sum += b % 10;
            mult *= b % 10;
            b /= 10;
        }
        if (sum == mult)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
