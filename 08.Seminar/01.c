#include<stdio.h>

void digit(char s[], int* r)
{
    for (int i = 0; s[i]!=0; i++)
    {
        r[s[i] - '0']++;
    }
    
}

void print_digit(int r[]){
    for (int i = 0; i<10; i++)
    {
        if(r[i]!=0)
            printf("%d%d", i, r[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    int r[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char s[100];
    scanf("%[0-9]", s);
    digit(s, r);
    print_digit(r);

    return 0;
}
