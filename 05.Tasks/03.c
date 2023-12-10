#include <stdio.h>

int is_happy_number(int n)
{
    int sum = 0;
    int input = n;
    while (input > 9)
    {
        sum = sum + input % 10;
        input /= 10;
    }
    sum += input;

    int mult = 1;
    input = n;
    while (input > 9)
    {
        mult = mult * input % 10;
        input /= 10;
    }
    mult *= input;

    return mult == sum;
}

int main()
{
    int a;
    printf("Введите натуральное число: ");
    scanf("%d", &a);
    if (1 > a)
    {
        printf("Числа должно быть натуральным!\n");
        return 0;
    }
    printf("%s\n", is_happy_number(a) ? "YES" : "NO");
    return 0;
}
