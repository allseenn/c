#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdint.h>
#define COLUMNS 6

typedef int8_t datatype;

typedef struct list {
    datatype year;
    datatype month;
    datatype day;
    datatype hour;
    datatype minute;
    datatype temperature;
}list;

long filesize(char filename[]);

int readfile(char filename[], list *myArray);

void printYear(list *myArray, int size);

void printMonth(list *myArray, int size, int month);