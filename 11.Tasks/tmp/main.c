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
            readfile(optarg);
            break;
        case 'm':
            printf("stats for month \"m = %s\".\n", optarg);
            break;
        case '?':
            printf("Error found !\n");
            break; 
        };
    };
    return 0;
};