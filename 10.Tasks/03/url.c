#include "url.h"

int url(queue *pl)
{
    queue *start = pl;

    int slashes = 0;
    while (pl != NULL && pl->next != NULL)
    {
        if (pl->value == '/')
            slashes++;
        pl = pl->next;
    }

    pl = start;

    int file = slashes;
    int points = 0;
    int extension = 0;
    slashes = 0;
    while (pl != NULL)
    {
        if (pl->value == '/')
            slashes++;
        if (slashes == file)
            extension++;
        if (pl->next != NULL && pl->next->value == '.' && slashes == file)
        {
            pl->next = NULL;
            return 1;
        }

        pl = pl->next;
    }
    return 0;
}
