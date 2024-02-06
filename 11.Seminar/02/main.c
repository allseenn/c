#include <stdio.h>
// #include <conio.h>
#define N 6
int main(int argc, char **argv)
{
    FILE *open;
    char name[] = "temperature_small.csv";
    open = fopen(name, "r");
    if (open == NULL)
        return 1;
    int Y, M, D, h, m, t;
    int r;
    while ((r = fscanf(open, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &h, &m, &t)) > 0)
    {
        if (r < N)
        {
            char s[25];
            r = fscanf(open, "%[^\n]", s);
            printf("ERROR %d=%s\n", r, s);
        }
        else
            printf("%d = %d;%d;%d;%d;%d;%d\n", r, Y, M, D, h, m, t);
    }
    return 0;
}
