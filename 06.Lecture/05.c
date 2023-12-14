#include <stdio.h>

int my_pow(int, int); 

double calc(int x, int n)
{
    return (double)my_pow(x, n) / n; //1. 4,5; 2. 3/1; 
}

int my_pow(int x, int n)
{
    if (n == 1) //1.n=2; 2.n=1
        return x; // 2.x=3
    return x * calc(x, n - 1); //2. 9
}

int main()
{
    int n=2, x=3;
    double a = calc(x, n); //1.calc(3,2) 
    printf("%lf", a);
    return 0;
}