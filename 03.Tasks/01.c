#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e, max;
    printf("Enter 5 numbers delimited by space: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    a > b?(max = a):(max = b);
    c > max?(max = c):(max = max);
    d > max?(max = d):(max = max);
    e > max?(max = e):(max = max);
    printf("%d\n", max);
    return 0;
}
