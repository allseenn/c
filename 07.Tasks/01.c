#include <stdio.h>
#define SIZE 5

void scan_arr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}


int mean_arr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    int arr[SIZE] = {NULL};
    printf("Enter %d numbers with spaces: ", SIZE);
    scan_arr(arr, SIZE);
    printf("%d", mean_arr(arr, 5));
    printf("\n");
    return 0;
}
