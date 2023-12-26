#include <stdio.h>
#define SIZE 10

void scan_arr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void sort_arr(int arr[], int size)
{
    int tmp = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i]/10%10 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int arr[SIZE] = {NULL};
    printf("Enter %d numbers with spaces:\n", SIZE);
    scan_arr(arr, SIZE);
    sort_arr(arr, SIZE);
    return 0;
}
