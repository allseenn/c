#include <stdio.h> 
int main()
{
int i, a, b;
 scanf("%d%d", &a, &b);
 for (i=a; i>=b; i--)
 printf("%d \n",i*i*i);
 return 0;
}