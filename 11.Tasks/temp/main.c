#include "temp_functions.h"

int main(int argc, char *argv[])
{
    if(argc < 2) argv[argc++] = "-h";
    int rez = 0;

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
            char *filename = optarg;
            int line_count = (filesize(filename)) / COLUMNS*3;
            list *myArray = (list *)calloc(line_count, sizeof(list));
            printYear(myArray, readfile(filename, myArray));
            break;
        case 'm':
            int month = atoi(optarg);
            printMonth(myArray, readfile(filename, myArray), month);
            break;
        case '?':
            printf("Error found !\n");
            break; 
        };
    };
    return 0;
};