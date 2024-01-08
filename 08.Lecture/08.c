#include<stdio.h>

unsigned long strlen(const char *cs) {
    int count = 0;
    while(*cs++)
        count++;
    return count;
}

int main(int argc, char const *argv[])
{
    char st[100] = "hes";
    printf("Sizeof = %lu\n", sizeof(st)); // Sizeof = 10
    printf("Strlen = %lu\n", strlen(st)); // strlen = 6
    return 0;
}