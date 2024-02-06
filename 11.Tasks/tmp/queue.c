#include "temp_functions.h"

// datatype dequeue(queue **p)
// {
//     queue *ptmp = *p;
//     datatype y;
//     if (empty_queue(*p))
//     { // Попытка взять из пустой очереди
//         fprintf(stderr, "Error. Queue is empty\n");
//         exit(1);
//     }
//     y = ptmp->year;
//     *p = ptmp->next;
//     free(ptmp);
//     return y;
// }

// void enqueue(struct list **pl, datatype year, datatype month, datatype day, datatype hour, datatype minute, datatype temperature)
// {
//     struct list *ptmp = *pl, *elem;
//     elem = malloc(sizeof(struct list));
//     elem->year = year;
//     elem->month = month;
//     elem->day = day;
//     elem->hour = hour;
//     elem->minute = minute;
//     elem->temperature = temperature;
//     elem->next = NULL;
//     if (*pl == NULL)
//     {
//         *pl = elem;
//         return;
//     }
//     while (ptmp->next)
//         ptmp = ptmp->next;
//     ptmp->next = elem;
// }

// void print_list(struct list *pl)
// {
//     while (pl)
//     {
//         printf("%d %d %d %d %d %d\n", pl->year, pl->month, pl->day, pl->hour, pl->minute, pl->temperature);
//         pl = pl->next;
//     }
// }

// _Bool empty_queue(queue *pl) {
//     return pl==NULL;
// }
