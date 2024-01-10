#include<stdio.h>
unsigned long digcnt(const char *cs) {
    int summa = 0;
    while(*cs) 
    {
        if(*cs > '0' && *cs <= '9')
            summa += (*cs - '0');
        cs++;
    }
    return summa;
}


int main()
{
    char text[100] = "1sdfsdf3";
    printf("%d\n", digcnt(text));
    return 0;
}