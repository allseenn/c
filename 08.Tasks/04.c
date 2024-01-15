#include<stdio.h>

void sort_array(int size, int a[])
{
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

int is_two_same(int size, int a[])
{
    sort_array(size, a);

    for (int i = 0; i < size-1; i++)
    {
        if(a[i]==a[i+1])
            return 1;
    }
    return 0;
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73,
    74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
    
    //print_arr(sizeof(arr)/sizeof(int), arr);
    printf(is_two_same(sizeof(arr)/sizeof(int), arr)?"YES\n":"NO\n");
    return 0;
}
