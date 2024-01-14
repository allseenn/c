#include<stdio.h>

void change_max_min(int size, int a[])
{
    int min_idx, max_idx, tmp = 0;
    for (int i = 1; i < size; i++)
    {
        if(a[i] > a[max_idx])
            max_idx = i;
        else if(a[i] < a[min_idx])
            min_idx = i;
    }
    tmp = a[max_idx];
    a[max_idx] = a[min_idx];
    a[min_idx] = tmp;
}

void print_arr(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int arr[5] = {}


    print_arr(sizeof(arr)/sizeof(int), arr);
    return 0;
}