#include<stdio.h>

int main(int argc, char const *argv[])
{
char s[100];
scanf("%[a-z]", s);// считать стр буквы
printf("%s\n", s);
char s2[100];
getchar() = "";
printf("hello: ");
scanf("%[0-9]", s2);// считать цифры 123WORLD
printf("%s\n",s2);
// scanf("%[^\n]", s);// все кроме \n Hello world
// printf("%s\n",s);
// char s1[100], s2[100];
// scanf("%s%s",s1,s2);
// printf("s1 = %s s2 = %s\n",s1,s2);
// char s1[100], s2[100];
// scanf("%[0-9]=%[a-z]", s1, s2);
// printf("s1 = %s s2 = %s\n", s1, s2);
    return 0;
}