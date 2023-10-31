#include <stdio.h>
int main(int argc, char **argv)
{
    printf("Enter choice:\n");
    printf("1. Start\n");
    printf("2. Stop\n");
    printf("3. Exit\n");
    printf("----------------------------------------------------------------------\n");
    printf("|\t Type |\t Byte(s) |\t |\t |\n");
    printf("|\t |\t of memory|\t Min|\t Max|\n");
    printf("----------------------------------------------------------------------\n");
    printf("| int8_t\t| 1|\t -128| 127|\n");
    printf("| uint8_t\t| 1|\t 0| 255|\n");
    printf("| int16_t\t| 2|\t -32768| 32767|\n");
    printf("|uint16_t\t| 2|\t 0| 65535|\n");
    printf("| int32_t\t| 4|\t -2147483648| 2147483647|\n");
    printf("|uint32_t\t| 4|\t 0| 4294967295|\n");
    printf("| int64_t\t| 8|\t -9223372036854775808| 9223372036854775807|\n");
    printf("|tuint64_t\t| 8|\t 0| 18446744073709551615|\n");
    printf("| float\t | 4|\t -3,4028235E+38| 3,4028235E+38|\n");
    printf("| double\t| 8|\t-1,7976931348623157E+308|1,7976931348623157E+308|\n");

    return 0;
}