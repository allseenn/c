#include <stdio.h>
#include <math.h>
// Для числа любой длинны!
int main() {
    int input, count = 0, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &input);
    while(input > 9){
        sum = sum + input % 10;
        if(input % 10 > 0) count++;
        input /= 10;
    }
    sum += input;

    printf("%.2f\n", sum / (float)count);
    return 0;
}

