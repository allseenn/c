#include<stdio.h>
#include<string.h>
#define SIZE 1000

int main()
{
    FILE *f;
    char word[SIZE];
    int count = 0;
    f = fopen("06.in", "r");
    while(fscanf(f, "%s", word) == 1)
        if(word[strlen(word)-1] == 'a')
            count++; 
    fclose(f);
    f = fopen("06.out", "w");
    fprintf(f, "%d", count);
    fclose(f);
    return 0;
}
