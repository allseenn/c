#include "trim.h"

void trim(queue **pl)
{
    queue *current = *pl;

    while (current != NULL && current->next != NULL)
    {
        if (current->value == ' ' && current->next->value == ' ')
        {
            // Удаляем текущий элемент (current->next)
            queue *temp = current->next;
            current->next = current->next->next;
            free(temp);
        }
        else
            current = current->next;
    }

    // Обновляем начало очереди (*pl), если первый элемент - пробел
    while (*pl != NULL && (*pl)->value == ' ')
    {
        queue *temp = *pl;
        *pl = (*pl)->next;
        free(temp);
    }
}
