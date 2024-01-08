#include<stdio.h>
unsigned long wordcnt(const char *cs) {
    int count = 0;
    short word = 0;
    while(*cs) 
    {
        if(*cs++ != ' ' && word == 0)
        {
            count++;
            word = 1;
        }
        else word = 0;
    }
    return count;
}

int strcmp(const char *cs, const char *ct)
{
    return strlen(cs) - strlen(ct);
}

int main()
{
    char text[100] = "1 2 3 4 5 6 7 8 9 0";
    printf("%d\n", wordcnt(text));
    return 0;
}