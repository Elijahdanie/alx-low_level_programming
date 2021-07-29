#include "lists.h"



size_t print_list(const list_t *h)
{
	unsigned int numnodes = 0;
    while (h != NULL)
    {
	    numnodes++;
        printf("[%d] %s\n", h->len, h->str == NULL?"(nil)":h->str);
        h = h->next;
    }
    return numnodes;
}

