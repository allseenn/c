#include <stdio.h>

void print_num(int num){
    if(num == 0)
        return;
    print_num(num / 10);
    printf("%d ", num%10);
    num /= 10;
}

main(){
    int n;
    printf("Введите целое положительное: ");
    scanf("%d", &n);
    print_num(n);
    printf("\n");
    return 0;
}