#include <stdio.h>

int main(void)
{
    FILE *f;
    int c;
    f = fopen("in.txt", "r");
    while (fscanf(f, "%c", &c)==1)
    {
        printf("%c\n", c);
    }
    fclose(f);
    return 0;
}