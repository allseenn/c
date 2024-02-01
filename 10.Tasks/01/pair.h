#include <stdio.h>
#include <stdlib.h>
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
#define SWAP(a,b) (a^=b, b^=a, a^=b)

typedef char datatype;

typedef struct list {
    datatype value;
    struct list * next;
}queue;

_Bool empty_queue(queue *p);

datatype dequeue(queue **p);

void enqueue(struct list **pl, datatype data);

void print_list(struct list *pl);

void pair(queue *pl);