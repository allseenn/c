#include "queue.h"

int main()
{
    queue *pq = NULL;
    for (int i = 1; i <= 5; i++)
        enqueue(&pq, i);

    for (int i = 1; i <= 5; i++)
        printf("%i\n", dequeue(&pq));
    return 0;
}