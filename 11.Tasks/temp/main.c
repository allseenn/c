#include "temp_functions.h"

int main(int argc, char *argv[])
{
    if(argc < 2) argv[argc++] = "-h";
    int rez = 0;
    char *filename;
    int month;
    int flag = 0;
    while ((rez = getopt(argc, argv, "hf:m:")) != -1)
    {
        switch (rez)
        {
        case 'h':
            printf("Usage: %s [-h] [-f filename] [-m month]\n", argv[0]);
            printf("       -h prints this help information\n");
            printf("       -f path to filename to read\n");
            printf("       -m month number to print statistics\n");
            break;
        case 'f':
            filename = optarg;
            flag = 1;
            break;
        case 'm':
            month = atoi(optarg);
            flag = 2;
            break;
        case '?':
            printf("Use for help: %s -h\n", argv[0]);
            break; 
        };
    };
    if(flag > 0)
    {
        int line_count = (filesize(filename)) / COLUMNS*3;
        list *myArray = (list *)calloc(line_count, sizeof(list));
        if(flag == 1)
            printYear(myArray, readfile(filename, myArray));
        else if(flag == 2)
            printMonth(myArray, readfile(filename, myArray), month);
    }
    return 0;
};