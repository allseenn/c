#include <stdio.h>

void sort_even_odd(int n, int a[])
{
    int even[n];
    int even_size = 0;
    int odd[n];
    int odd_size = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            even[even_size] = a[i];
            even_size++;
        }
        else
        {
            odd[odd_size] = a[i];
            odd_size++;
        }
    }

    sort_array(even_size, even);
    sort_array(odd_size, odd);

    for (int i = 0; i < even_size; i++)
        a[i] = even[i];
    
    for (int i = i; i < odd_size; i++)
        a[i+even_size] = odd[i];
}

void sort_array(int size, int a[]){
    for (int i = 0; i < size; i++)
    {
        int temp = 0;
        for (int j = 0; j < size; j++)
        {
            if(a[i] > a[j])
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
    sort_even_odd(sizeof(arr)/sizeof(int), arr);
    print_arr(sizeof(arr)/sizeof(int), arr);
    return 0;
}
