#include <stdio.h>
int main()
{
    int i, max;
    int arr[10];
    scanf("%d", &arr[0]);
    max = 0;
    for(i = 1; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>arr[max])
            max = i;
    }


}