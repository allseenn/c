#include<stdio.h>
#include<string.h>
#define SIZE 1000

void copy_str(char src[], char dst[])
{
    for (int i = 0; i < strlen(src); i++)
        dst[i] = src[i];
    
}

int main(int argc, char const *argv[])
{
    FILE *f;
    char str[SIZE];
    char max_word[SIZE] = {0};
    f = fopen("05.in", "r");
    while(fscanf(f, "%s", str) == 1)
        if(strlen(str) > strlen(max_word))
            copy_str(str, max_word);
        
    fclose(f);
    f = fopen("05.txt", "w");
    fprintf(f, "%s", max_word);
    fclose(f);
    return 0;
}
