#include<stdio.h>
#define X 8
#define Y 8

int find_cell(int x, int y, int a[y][x], char cell[])
{
    int letterX = cell[0] <= 'H'?cell[0]-65:cell[0]-97;
    int digitY = cell[1]-'1';
    return a[digitY][letterX];
}

int main()
{
    int arr[Y][X] =    {{1, 0, 1, 0, 1, 0, 1, 0},
                        {0, 1, 0, 1, 0, 1, 0, 1},
                        {1, 0, 1, 0, 1, 0, 1, 0},
                        {0, 1, 0, 1, 0, 1, 0, 1},
                        {1, 0, 1, 0, 1, 0, 1, 0},
                        {0, 1, 0, 1, 0, 1, 0, 1},
                        {1, 0, 1, 0, 1, 0, 1, 0},
                        {0, 1, 0, 1, 0, 1, 0, 1}};

    char str[3];
    str[0] = '\0';
    scanf("%s", str);
    printf(find_cell(X, Y, arr, str)?"BLACK\n":"WHITE\n");
    return 0;
}