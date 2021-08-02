#include "lists.h"
#include<stdlib.h>



size_t print_listint(const listint_t *h)
{
    unsigned int nodes = 0;
    const listint_t *tmp;

    if(h == NULL)
    {
        return nodes;
    }

    tmp = h;

    while (tmp)
    {
        nodes++;
        printf("%d\n", tmp->n);
        tmp = tmp->next;
    }
    
    return nodes;
}
