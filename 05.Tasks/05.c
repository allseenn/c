#include <stdio.h>
int check(void)
{
    int brackets = 0;
    char c;
    while ((c = getchar()) != '.')
    {
        if (c == '(')
            brackets += 1;
        else if (c == ')')
            brackets -= 1;
        if (brackets < 0)
            return 0;
    }
    return !brackets;
}

int main()
{
    printf("%s", check() ? "YES" : "NO");
    return 0;
}
