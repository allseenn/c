// Ввести два числа и найти их разность 
#include <stdio.h>
int main()
{
    int a, b;
    int diff;
    printf("Enter 2 digits: ");
    scanf("%d%d", &a, &b);
    diff = (a - b);
    printf("%d\n", diff);
    return 0;
}