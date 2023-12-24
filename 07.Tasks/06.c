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
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int find_mode(int arr[], int size)
{
    int mode_index = 0;
    int mode_count = 1;
    int mode_max = 1;
    for (int i = 0; i < size-1; i++)
    {
        if(arr[i] == arr[i+1])
            mode_count++;
        else if(mode_count > mode_max)
        {
            mode_max = mode_count;
            mode_index = i;
            mode_count = 1;
        }
    }
    return arr[mode_index];
}

int main()
{
    int arr[SIZE] = {NULL};
    printf("Enter %d numbers with spaces:\n", SIZE);
    scan_arr(arr, SIZE);
    sort_arr(arr, SIZE);
    printf("%d\n", find_mode(arr, SIZE));
    return 0;
}