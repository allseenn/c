#include <stdio.h>

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int make_arr(int arr[], int num)
{
    int size = arr_size(num);
    for (int i = size-1; i >= 0; i--)
    {
            arr[i] = num%10;
            num /= 10;
    }
}

int arr_size(int num)
{
    if(num == 0)
        return 1;
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    int size = arr_size(n);
    int arr[size];
    make_arr(arr, n);
    print_arr(arr, size);
    return 0;
}
