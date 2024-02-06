#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdint.h>
#define COLUMNS 6
#define LINE_LENGTH 23

int readfile(char filename[]);

typedef int8_t datatype;

typedef struct list {
    datatype year;
    datatype month;
    datatype day;
    datatype hour;
    datatype minute;
    datatype temperature;
    //struct list * next;
}queue;

_Bool empty_queue(queue *p);

datatype dequeue(queue **p);

void enqueue(struct list **pl, datatype year, datatype month, datatype day, datatype hour, datatype minutes, datatype temperature);

void print_list(struct list *pl);