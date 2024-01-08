#include<stdio.h>
char* strcpy(char *dst, const char *src)
{
    for (int i = 0; i < sizeof(src); i++)
        dst[i] = src[i];
    return dst;
}

void printString(char *src)
{
    while (*src) printf("%c", *src++);
}

int main(int argc, char const *argv[])
{
    char st1[10] = "hellof";
    char st2[10];
    printf("%s\n", strcpy(st2, st1));
    printf("%s\n", st2);
    return 0;
}