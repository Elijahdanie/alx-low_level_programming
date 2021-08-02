#include "lists.h"
#include <stdlib.h>


size_t listint_len(const listint_t *h)
{
    unsigned int numitems = 0;
    const listint_t *tmp;

    tmp = h;

    if (h == NULL)
    {
        return (0);
    }

    while (tmp)
    {
        numitems++;
        tmp = tmp->next;
    }
    
    return numitems;
}
