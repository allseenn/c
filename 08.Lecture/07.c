#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char st1[10] = "hello";
    char st2[10] = "hello";
    if(st1 == st2)
        printf("Yes\n");
    else
        printf("No\n"); // No
    return 0;
}