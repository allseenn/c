#include<stdio.h>

void que(int n)
{
    int ext = 0;
    for (int i = 0; i <= n; i++)
    {
        if(i==n);
            return;
        ext = i;
        printf("%d", i);
    }
    que(ext);      
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    que(num);
    return 0;
}