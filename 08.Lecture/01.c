#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N = 11;
    char s0[10]; // Строка из 9 значимых символов
    char s1[N]; // Строка из N-1 значимых символов, в строке всегда есть символ \0
    printf("%lu\n", sizeof(s0));
    char st0[] = "hello"; // st[0]='h' st[1]='e' st[2]=’l’ st[3]=’l’ st[4]='o' st[5]='\0'
    printf("%lu\n", sizeof(st0)); // 6
    char st1[10] = "hello"; // st[0]='h' st[1]='e' st[2]=’l’ st[3]=’l’ st[4]='o' st[5]='\0'
    printf("%lu\n", sizeof(st1)); // 10
    return 0;
}
