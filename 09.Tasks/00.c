#include<stdio.h>
#include<string.h>

#define SIZE 100
int main(int argc, char const *argv[])
{
    FILE *f;
    char str[SIZE] = "Hello, ";
    char surname[SIZE];
    int len = strlen(str);
    f = fopen("00.in", "r");
    fscanf(f, "%s", surname); 
    len = strlen(str);
    fscanf(f, "%s", str + len);
    fclose(f);
    f = fopen("00.txt", "w");
    fprintf(f, "%s %s!", str, surname);
    fclose(f);
    return 0;
}
