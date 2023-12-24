#include <stdio.h>
#define SIZE 12
#define SHIFT 4

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


void shift_arr(int arr1[], int arr2[], int size, int shift)
{
    for (int i = 0; i < size; i++)
    {
        if(i < shift)
        {
            arr2[i] = arr1[size - shift + i];
        }
        else if(i>=shift)
            arr2[i] = arr1[i - shift];
    }
}

int main()
{
    if(SHIFT > SIZE)
    {
        printf("Error: SIZE %d can't be more than SHIFT %d\n", SIZE, SHIFT);
        return 1;
    }
    int arr[SIZE] = {NULL};
    int arr_shifted[SIZE] = {NULL};
    printf("Enter %d numbers with spaces:\n", SIZE);
    scan_arr(arr, SIZE);
    shift_arr(arr, arr_shifted, SIZE, SHIFT);
    print_arr(arr_shifted, SIZE);
    return 0;
}
