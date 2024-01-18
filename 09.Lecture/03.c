#include <stdio.h>

int main()
{
    FILE *f;
    int size = 0;
    char filename[50] = {0};
    printf("Enter file name: ");
    scanf("%s", filename);
    f = fopen(filename, "r");
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    printf("%s %lu\n", filename, size);
    fclose(f);
    return 0;
}


