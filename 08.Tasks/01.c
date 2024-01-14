#include <stdio.h>

void sort_array(int size, int a[]){
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        for (int j = 0; j < size; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }      
    }   
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
    int arr[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
    sort_array(sizeof(arr)/sizeof(int), arr);
    print_arr(sizeof(arr)/sizeof(int), arr);
    return 0;
}

