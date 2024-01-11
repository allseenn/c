#include <stdio.h>
#include <stdint.h>
int StrToHex(char *str, unsigned char *Hex)
{
    unsigned char byte = 0;
    short int half = 0;
    short int space = 0;
    int index = 0;
    int size = 0;
    while (*str)
    {
        if (*str >= '0' && *str <= '9')
            byte += (*str - '0');
        else if (*str >= 'A' && *str <= 'F')
            byte += (*str - 55);
        else if (*str >= 'a' && *str <= 'f')
            byte += (*str - 87);
        else space = 1;

        if (*(str+2) == 0 && space == 1)
        {
            *(str+2) = ' ';
        }
        
        if (half == 0 && space == 0)
        {
            byte *= 16;
            half++;
        }
        else if (half == 1 && space == 0)
        {
            *Hex = byte;
            Hex++;
            byte = 0;
            half = 0;
            size++;
        }
        else if (half == 0 && space == 1)
        {
            space = 0; 
 
        }
        else if (half == 1 && space == 1)
        {
            space = 0;
            byte /= 16;
            *Hex = byte;
            Hex++;
            byte = 0;
            half = 0;
            size++;
        }
        

        
        str++;
    }
    return size;
}

void printHex(uint8_t *Hex, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%02x ", Hex[i]);
    }
    
}

int main()
{
    char text[100] = " 1 2afBF";
    unsigned char bytes[500];
    int size = StrToHex(text, bytes);
    printHex(bytes, size);
    return 0;
}