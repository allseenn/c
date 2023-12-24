#include<stdio.h>
#define SIZE 5

void scan_arr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int min_arr(int arr[], int size)
{
    int min = __INT32_MAX__;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main(int argc, char const *argv[])
{
    int arr[SIZE] = {NULL};
    printf("Enter %d numbers with spaces: ", SIZE);
    scan_arr(arr, SIZE);
    printf("%d", min_arr(arr, 5));
    printf("\n");
    return 0;
}
