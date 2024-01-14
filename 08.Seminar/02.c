#include <stdio.h>
#define SIZE 5

void scan_arr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

int find(int arr[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        
        if(count != i)
            return count;
        count++;
    }
    
}

int main()
{
    int arr[SIZE];
    printf("Enter %d numbers with spaces: ", SIZE);
    scan_arr(arr, SIZE);
    sort_arr(arr, SIZE);
    print_arr(arr, SIZE);
    printf("\n");
    printf("%d", find(arr, SIZE));
    return 0;
}