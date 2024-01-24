#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 1000

int compare(const void *a, const void *b)
{
    return (*(char*)a - *(char*)b);
}

int main(int argc, char const *argv[])
{
    FILE *f;
    char str[SIZE];
    char comp_char = str[0];
    f = fopen("04.in", "r");
    fscanf(f, "%[^\n]", str); 
    fclose(f);
    qsort(str, strlen(str), sizeof(char), compare);
    // printf("%s", str);
    f = fopen("04.txt", "w");
    if(str[0] != ' ') fputc(str[0], f);
    for (int i = 1; i < strlen(str); i++)
    {
        if(str[i] != comp_char && str[i] != ' ')
        {
            fputc(str[i], f);
            comp_char = str[i];
        }
    }
    fclose(f);
    return 0;
}
