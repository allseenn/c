#include<stdio.h>
#include<string.h>
#define SIZE 100

int main(int argc, char const *argv[])
{
    FILE *f;
    char str[SIZE];
    f = fopen("03.in", "r");
    fscanf(f, "%[^\n]", str); 
    fclose(f);
    f = fopen("03.out", "w");
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'a') str[i] = 1;
        else if(str[i] == 'A') str[i] = 2;
        else if(str[i] == 'b') str[i] = 3;
        else if(str[i] == 'B') str[i] = 4;
    }
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 1) str[i] = 'b';
        else if(str[i] == 2) str[i] = 'B';
        else if(str[i] == 3) str[i] = 'a';
        else if(str[i] == 4) str[i] = 'A';
    }
    fprintf(f, "%s", str);
    fclose(f);
    return 0;
}
