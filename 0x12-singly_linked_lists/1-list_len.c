#include "lists.h"

size_t list_len(const list_t *h)
{
    unsigned int numnodes = 0;
    while (h != NULL)
    {
	    numnodes++;
        h = h->next;
    }
    return numnodes;
}