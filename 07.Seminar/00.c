#include<stdio.h>

int main(int argc, char const *argv[])
{
int a[5] = {1,2,3,4,5};
int *pa = a+2, n=10,*pb = a+2 ;
*pa++ = n+2;
//*++pb = n+3;
*(++pb) = n+2;
printf("%d\n",*pa);
printf("%d\n",pa);
printf("%d\n",*pb);
printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
    return 0;
}
