#include <stdio.h>
#define SIZE 30

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

int main()
{
    int arr[SIZE] = {21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 9, 8, 7, 6, 5, 4, 3, 2, 111, 100, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    sort_arr(arr, SIZE);
    printf("%d %d", arr[0], arr[1]);
    printf("\n");
    return 0;
}