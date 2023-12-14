#include<stdio.h>

void print_digits(int n)
{
    if (n >= 10)
        print_digits(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    print_digits(num);
    return 0;
}