#include <stdio.h>
#define SIZE 10

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

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
        for(int j = i+1; j < size; j++)
        {
            if(arr[i]%10 > arr[j]%10)
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main()
{
    int arr[SIZE] = {NULL};
    printf("Enter %d numbers with spaces:\n", SIZE);
    scan_arr(arr, SIZE);
    sort_arr(arr, SIZE);
    print_arr(arr, SIZE);
    return 0;
}
