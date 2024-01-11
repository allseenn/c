#include <stdio.h>
int StrToHex(const char *string, unsigned char *Hex)
{
    unsigned char byte = 0;
    short int half = 0;
    short int space = 0;
    int index;
    int size = 0;
    char str[100];

    for(index = 0; *(string+index); index++)
        str[index] = *(string+index);
        
    str[index] = ' ', str[index+1] = '\0';

    for (index = 0; str[index] != '\0'; index++)
    {

        if (str[index] >= '0' && str[index] <= '9')
            byte += (str[index] - '0');
        else if (str[index] >= 'A' && str[index] <= 'F')
            byte += (str[index] - 55);
        else if (str[index] >= 'a' && str[index] <= 'f')
            byte += (str[index] - 87);
        else space = 1;
        
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
    }
    return size;
}

void printHex(unsigned char *Hex, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%02x ", Hex[i]);
    }
    
}

int main()
{
    char text[100] = "12 gggggg a f B F";
    unsigned char bytes[500];
    int size = StrToHex(text, bytes);
    printHex(bytes, size);
    return 0;
}