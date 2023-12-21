#include <stdio.h>

void Print(int *arr, int len)
{
 for (int i = 0; i < len; i++)
 printf("%d ",arr[i]);;
}

int main()
{
    int arr[10] = {-50, -5, 1, 2, 5, -6, -1, 8, -9, 0};
    int negative = 0;
    int positive = 0;

    for (int i = 0; i < 10; i++)
    {
        if(arr[i] < 0)
            negative++;
        else if(arr[i] > 0)
            positive++;
       // printf("%d ", arr[i]);
    }
    int neg[negative];
    int pos[positive];
    negative = 0;
    positive = 0;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] < 0)
            neg[negative++] = arr[i];
        else if(arr[i] > 0)
            pos[positive++] = arr[i];
        //printf("%d ", arr[i]);
    }
    Print(neg, negative);
    printf("\n");
    Print(pos, positive);
    printf("\n");
    return 0;
}
