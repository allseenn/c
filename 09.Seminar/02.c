#include <stdio.h>
#include <string.h>

int main(){
    char string[50] = {0};
    int small = 0;
    int high = 0;
    FILE *f_in, *f_out;
    char name_in[] = "input.txt";
    char name_out[] = "output.txt";
    f_in = fopen(name_in, "r");
    f_out = fopen(name_out, "w");
    fscanf(f_in, "%s", string);
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
            high++;
        else if(string[i] >= 'a' && string[i] <= 'z')
            small++;
            
    }  
    fprintf(f_out, "%d %d", small, high);
    //printf("%d %d\n", small, high);
    return 0;
}