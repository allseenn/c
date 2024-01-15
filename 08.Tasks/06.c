#include<stdio.h>
#define X 5
#define Y 5

int mean_arr(int x, int y, int a[y][x])
{
    int j, sum = 0;
    for (int i = 0; i < y; i++)
    {
        sum += a[i][j];
        j++;
    }
    return sum / j;
}

int positive_cnt(int x, int y, int a[y][x])
{
    int count = 0;
    int mean = mean_arr(X, Y, a);
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if(a[i][j] > mean)
                count++;
        }
    }
    return count;
}

void print_arr(int x, int y, int a[y][x])
{
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ", a[i][j]);
        }
    printf("\n");
    }
    printf("\n");
}

int main()
{
    int arr[Y][X] =    {{1, 1, 1, 1, 1},
                        {2, 2, 2, 2, 2},
                        {3, 3, 3, 3, 3},
                        {4, 4, 4, 4, 4},
                        {5, 5, 5, 5, 5}};

    printf("%d\n", positive_cnt(X, Y, arr));
    return 0;
}