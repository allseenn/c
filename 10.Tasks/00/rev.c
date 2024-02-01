#include "rev.h"

void rev(char *str)
{
    char tmp;
    for (int i = 0; i < strlen(str)-1; i+=2)
    {
        if(str[i+1] != ' ')
        {
            tmp = str[i];
            str[i] = str[i+1];
            str[i+1] = tmp;  
        }
        else
        {
            tmp = str[i];
            str[i] = str[i+2];
            str[i+2] = tmp; 
            i++;
        }
 
    }
}