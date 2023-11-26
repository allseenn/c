#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e, min;
    printf("Enter 5 numbers delimited by space: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    a < b?(min = a):(min = b);
    c < min?(min = c):(min = min);
    d < min?(min = d):(min = min);
    e < min?(min = e):(min = min);
    printf("%d\n", min);
    return 0;
}