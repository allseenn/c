#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s[100];
    scanf("%[a-z]", s); // helloWORLD (считать только буквы) 
    printf("%s\n", s); // hello

    while (getchar() != '\n'); // очистка буфера ввода
    scanf("%[0-9]", s); // 123WORLD (считать цифры) 
    printf("%s\n",s); // 123

    while (getchar() != '\n');
    scanf("%[^\n]", s); // Hello world (все кроме \n)
    printf("%s\n",s); // Hello world

    while (getchar() != '\n');
    char s1[100], s2[100];
    scanf("%s%s",s1,s2); // Hello world
    printf("s1 = %s s2 = %s\n",s1,s2); // s1 = Hello s2 = world

    while (getchar() != '\n'); 
    scanf("%[0-9]=%[a-z]", s1, s2); // 123 = hello (= символ разделителя между спецификаторами)
    printf("s1 = %s s2 = %s\n", s1, s2); // s1 = 123 s2 = hello
    return 0;
}