#include "rev.h"

int main()
{
    FILE *f;
    char str[SIZE];
    f = fopen("01.in", "r");
    if (f  == NULL) return 1;
    fscanf(f, "%[^n]", str);
    fclose(f);
    rev(str);
    f = fopen("01.txt", "w");
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}

