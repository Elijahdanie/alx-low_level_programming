#include "lists.h"
#include <stdlib.h>


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int indexatnode = 0;

    if (head == NULL)
    {
        return (NULL);
    }
    
    while(head)
    {
        if(indexatnode == index)
        {
            return head;
            break;
        }
        head = head->next;
        indexatnode++;
    }

    return (NULL);
}