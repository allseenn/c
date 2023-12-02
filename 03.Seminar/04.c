#include <stdio.h>
int main()
{
int x0 = 4, y0 = 3, a = 2, b = 1, x = 3, y = 3;
    float n = (float)((x-x0)*(x-x0))/(a*a)+((y-y0)*(y-y0))/(b*b);
    if (((x-x0)*(x-x0))/(a*a)+((y-y0)*(y-y0))/(b*b)<1){
        printf("yes %f",n);
    }
    else {
        printf("No %f",n);
    }
 return 0;
}