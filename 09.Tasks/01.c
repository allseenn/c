#include<stdio.h>
#include<string.h>
#define SIZE 100

int main(int argc, char const *argv[])
{
    FILE *f;
    char word1[SIZE];
    char word2[SIZE];
    int count = 0;
    f = fopen("01.in", "r");
    fscanf(f, "%s", word1); 
    fscanf(f, "%s", word2);
    fclose(f);
    f = fopen("01.txt", "w");
    for (int i = 0; i < strlen(word1); i++)
    {
        count = 0;
        for (int j = 0; j < strlen(word1); j++)
        {
            if(word1[i] == word1[j] && i != j)
                count++;
        }
        if (count == 0)
            for (int k = 0; k < strlen(word2); k++)
            {
                if(word1[i]==word2[k])
                    count--;
            }
        if(count == -1)
        {
            fputc(word1[i], f);
            fputc(' ', f);
        }
            
    }
    fclose(f);
    return 0;
}
