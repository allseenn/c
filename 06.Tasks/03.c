#include<stdio.h>

int bin_count(int n){
    int count = 0;
    if(n == 0) return count;
    if(n%2 != 0) count++;
    return count + bin_count(n/= 2);
}

int main()
{
    int n;
    printf("Введите натуральное число: ");
    scanf("%d", &n);
    printf("%d\n", bin_count(n));
    return 0;
}
