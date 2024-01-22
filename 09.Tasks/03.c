#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 100

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main(int argc, char const *argv[])
{
    FILE *f;
    char str[SIZE];
    int arr[SIZE];
    int arr_cnt = 0;
    char dig[sizeof(int)];
    int dig_cnt = 0;
    f = fopen("03.in", "r");
    fscanf(f, "%[^\n]", str); 
    fclose(f);
    f = fopen("03.out", "w");
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            dig[dig_cnt] = str[i];
            dig_cnt++;
        }
        else if(str[i] > '9' && dig_cnt > 0)
        {   
            dig[dig_cnt] = '\0';
            dig_cnt=0;
            arr[arr_cnt] = atoi(dig);
            arr_cnt++;
        }

    }

    qsort(arr, arr_cnt, sizeof(int), compare);

    for (int i = 0; i < arr_cnt; i++)
    {
        fprintf (f, "%d ", arr[i]);
    }
    
    fclose(f);
    return 0;
}
