#include <stdio.h>

int main(){
    int a;
    printf("Enter a numbers with several digits: ");   
    scanf("%d", &a);
    if(a < 0) a = -1 * a;
    while(a > 0){
        if((a % 10)%2 != 0){
            printf("NO\n");
            return 0;
        } 
        a /= 10;
    }   
    printf("YES\n");
    return 0;
}
