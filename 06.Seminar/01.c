#include<stdio.h>

void reverse(int n)
{
    printf("%d ", n % 10);
    if (n >= 10)
        print_num(n / 10);
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    reverse(num);
    return 0;
}