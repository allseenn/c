#include <stdio.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    const uint8_t *ps[] = {"one", "two", "three", NULL}; // NULL признак конца
    for(uint32_t i=0; ps[i] ;i++)
        printf("%s\n", ps[i]);
    return 0;

}
