#include "lists.h"
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
     unsigned int iterator = 0;
    listint_t *tmpHead;
    listint_t* previousnode;

    if(head == NULL)
    {
        return (-1);
    }

    tmpHead = *head;

    while (tmpHead)
    {
        previousnode = tmpHead;
        
        if(iterator == index)
        {
            if (tmpHead->next != NULL)
            {
                previousnode->next = tmpHead->next;
                free(tmpHead);
                return (1);
            }
            else
            {
                previousnode->next = NULL;
                free(tmpHead);
                return (1);
            }
        }
        
        tmpHead = tmpHead->next;
        iterator++;
    }

    return (-1);
}