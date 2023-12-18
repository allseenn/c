#include <stdio.h>
int acounter(void)
{
    int a = 0;
    char c;
    if((c = getchar()) == '.')
        return a;
    else if (c == 'a')
        a++;    
    return a += acounter();
}

int main()
{
    printf("Введите текст, в конце точка: ");
    printf("%d\n", acounter());
    return 0;
}