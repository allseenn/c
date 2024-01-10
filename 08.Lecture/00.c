#include<stdio.h>
unsigned long digcnt(const char *cs) {

    unsigned char bite = 0;
    while(*cs) 
    {   
        
        //if(*cs >= "0" && *cs <= "9")
        printf("%d ", *cs-55);
        bite += cs-41;
        cs++;
    }
    return bite;
}


int main()
{
    char text[100] = "F";
    unsigned char byte[100];
    printf("%d\n", digcnt(text));
    return 0;
}