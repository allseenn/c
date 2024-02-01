#include "trim.h"

int main()
{
    FILE *f;
    char c;
    queue *pq = NULL;
    f = fopen(INPUT_FILE_NAME, "r");
    if (f  == NULL) return 1;
    while((c=fgetc(f))!=EOF)
        enqueue(&pq, c);
    fclose(f);
    
    trim(&pq);

    f = fopen(OUTPUT_FILE_NAME, "w");
    while (!empty_queue(pq)) 
        fputc(dequeue(&pq), f);
    fclose(f);
    printf("%s - OUTPUT FILE\n", OUTPUT_FILE_NAME);
    return 0;
}