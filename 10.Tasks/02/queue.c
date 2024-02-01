#include "trim.h"

datatype dequeue(queue **p)
{
    queue *ptmp = *p;
    datatype c;
    if (empty_queue(*p))
    { // Попытка взять из пустой очереди
        fprintf(stderr, "Error. Queue is empty\n");
        exit(1);
    }
    c = ptmp->value;
    *p = ptmp->next;
    free(ptmp);
    return c;
}

void enqueue(struct list **pl, datatype data)
{
    struct list *ptmp = *pl, *elem;
    elem = malloc(sizeof(struct list));
    elem->value = data;
    elem->next = NULL;
    if (*pl == NULL)
    {
        *pl = elem;
        return;
    }
    while (ptmp->next)
        ptmp = ptmp->next;
    ptmp->next = elem;
}

void enqueue_recurs(struct list **pl,
                    datatype data)
{
    if (*pl == NULL)
    {
        (*pl) = malloc(sizeof(struct list));
        (*pl)->value = data;
        (*pl)->next = NULL;
        return;
    }
    else
    {
        enqueue_recurs(&((*pl)->next), data);
    }
}
void print_list(struct list *pl)
{
    while (pl)
    {
        printf("%c", pl->value);
        pl = pl->next;
    }
    printf("\n");
}

_Bool empty_queue(queue *pl) {
    return pl==NULL;
}
