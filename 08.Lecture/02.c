#include<stdio.h>

int main(int argc, char const *argv[])
{
    char s[10];
    scanf("%s",s); // функция считывает строку до первого пробельного символа или \n, и при наличии таковых подставляет \0 в конец
    printf("%s", s); // напечатать строку
    char s1[10];
    scanf("%9s",s1); // считать строку не более 9 символов
    printf("%s\n",s1); // напечатать строку
    return 0;
}