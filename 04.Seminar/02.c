#include <stdio.h>
enum {BASE=10};
int main()
{
int n, n1=1, n2=0;
scanf("%d", &n);
if(n)
{
 do
 {
 n1 = n % BASE;
 n /= BASE;
 n2 = n % BASE;
 } while(n > 0 && n1 != n2);
}
if(n1 == n2)
 printf("YES");
else
 printf("NO");
return 0;
}