#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char st[10] = "hello";
    printf("Sizeof = %lu\n", sizeof(st)); // Sizeof = 10
    printf("Strlen = %lu\n", strlen(st)); // strlen = 6
    return 0;
}