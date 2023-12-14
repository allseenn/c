int fib(int num)
{
    int first = 0;
    int second = 1;
    int sum = 0;
    if(num <= 2)
        sum = second;
    for(int i = 1; i < num; i++)
    {
        sum = first + second;
        first = second;
        second = sum; 
    }
    return sum; 
}

int main()
{
    printf("%d", fib(10));
    return 0;
}