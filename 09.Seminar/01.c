#include <stdio.h>
#include <string.h>

int main(){
    char string[50] = {0};
    char res[50] = {0};
    int count = 0;
    FILE *f_in, *f_out;
    char name_in[] = "input.txt";
    char name_out[] = "output.txt";
    f_in = fopen(name_in, "r");
    f_out = fopen(name_out, "w");
    fscanf(f_in, "%s", string);
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i] == string[strlen(string)-1])
            res[i] = i;
            
    }
    res[3] = '\0';
    fprintf(f_out, "%s", res);
    
    return 0;
}