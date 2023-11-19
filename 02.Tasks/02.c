// Ввести три числа, найти их сумму и произведение 
// %d+%d+%d=%d 
// %d*%d*%d=%d
#include <stdio.h>
int main()
{
    int a, b, c;
    int sum, mult;
    printf("Enter 3 digits: ");
    scanf("%d%d%d", &a, &b, &c);
    sum = (a + b + c);
    mult = (a * b * c);
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    printf("%d+%d+%d=%d\n", a, b, c, mult);

    return 0;
}