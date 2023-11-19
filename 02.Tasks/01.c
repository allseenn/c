// Ввести три числа, найти их сумму
// Нужно напечатать сумму трех чисел
#include <stdio.h>
int main()
{
    int a, b, c;
    int sum;
    printf("Enter 3 digits: ");
    scanf("%d%d%d", &a, &b, &c);
    sum = (a + b + c);
    printf("%d+%d+%d=%d\n", a, b, c, sum);
    return 0;
}