#include<stdio.h>

int is2pow(int n)
{
    if (n == 1)
        return 1;
    else if (n%2==0)
        return is2pow(n/2);
    
    return 0;
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("%d", is2pow(num));
    return 0;
}