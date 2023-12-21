#include <stdio.h>
void aPrint(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
}
void reverseArray(int *array, int num)
{
    for (int i = 0, j = num - 1; i < j; i++, j--)
    {
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}
int main()
{
    enum {aSize = 10};
    int array[aSize] = {0};
    for (int i = 0; i < aSize; i++)
        scanf("%d", &array[i]);
    for (int i = 0; i < 2; i++)
        reverseArray(array + i * aSize / 2, aSize / 2);
    aPrint(array, aSize);
    return 0;
}
