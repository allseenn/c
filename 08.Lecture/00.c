#include<stdio.h>

int strcmp(const char *a, const char *b)
{   
    while(*a && *b && *a == *b) *a++, b++;
    return *a - *b;
}

int main()
{ 
    char *a = "abcde";
    char *b = "abcde";

    printf("%d\n", strcmp(a, b));
    return 0;
}