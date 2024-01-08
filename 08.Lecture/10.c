#include<stdio.h>
unsigned long strlen(const char *cs) {
    int count = 0;
    while(*cs++) count++;
    return count;
}

int strcmp(const char *cs, const char *ct)
{
    return strlen(cs) - strlen(ct);
}

int main()
{
    char st1[100] = "1 1 1 1 1 1 1";
    char st2[109] = "1 1 1 1 11 1";
    printf("%d\n", strcmp(st1, st2));
    return 0;
}