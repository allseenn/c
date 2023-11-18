#include <stdio.h>
int main(void)
{
int x;
 scanf("%d", &x);
 printf("%d", (x / 1000) * ((x % 1000) / 100) * ((x % 100) / 10) * (x % 10));
 return 0;
}
