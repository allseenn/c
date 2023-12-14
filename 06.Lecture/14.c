// На стандартном потоке ввода задан текст оканчивающаяся точкой, точка в текст не входит. 
// На стандартный поток вывода вывести этот текст в обратном порядке.
#include <stdio.h>

void check(void)
{
    int brackets = 0;
    char c;
    while ((c = getchar()) != '.')
    {
        putchar(c);
    }
    
}

int main()
{
    check();
}