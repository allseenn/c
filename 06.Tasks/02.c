#include <stdio.h>

void print_num(int a, int b){
    if(a == b){
        printf("%d ", a);
        return;
    }
    else if (a < b)
    {
        printf("%d ", a);
        print_num(a+1, b); 
    }
    else if (a > b)
    {
        print_num(a, b+1);
        printf("%d ", b);
    }
}

main(){
    int a, b;
    printf("Введите два целых через пробел: ");
    scanf("%d%d", &a, &b);
    print_num(a, b);
    printf("\n");
    return 0;
}