#include "pair.h"

void pair(queue *pl) {
    char temp;
    queue *current = pl;
    while (current->next != NULL) {
        if (current->next->value != ' ')
            SWAP(current->value, current->next->value);
        else
        {
            SWAP(current->value, current->next->next->value);
            current = current->next;
        }
        if(current->next->next != NULL)
            current = current->next->next;
        else
            break;
    }
}