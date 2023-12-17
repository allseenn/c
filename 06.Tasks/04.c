#include<stdio.h>

void odd(void){
    int n;
    scanf("%d", &n);
    if(n != 0){
        if(n%2 != 0) printf("%d ", n);
        odd();
    }
    return;
}

int main()
{
    printf("Последовательность N, через пробел, в конце 0: ");
    odd();
    printf("\n");
    return 0;
}
