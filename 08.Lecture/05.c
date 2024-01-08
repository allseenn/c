#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s1[100], s2[100];
    int r;
    r=scanf("%[0-9]=%[a-z]",s1,s2); // 123=hello
    printf("r = %d\n",r);           // r = 2

    while (getchar() != '\n'); 
    r=scanf("%[0-9]=%[a-z]",s1,s2); // 123=123
    printf("r = %d\n",r);           // r = 1
    
    while (getchar() != '\n'); 
    r=scanf("%[0-9]=%[a-z]",s1,s2); // hello=123
    printf("r = %d\n",r);           // r = 0

    while (getchar() != '\n'); 
    r=scanf("%[0-9]=%[a-z]",s1,s2); // \EOF
    printf("r = %d\n",r);           // r = -1
    return 0;
}