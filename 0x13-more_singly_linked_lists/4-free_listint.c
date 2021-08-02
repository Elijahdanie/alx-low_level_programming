#include "lists.h"
#include <stdlib.h>

void free_listint(listint_t *head)
{
    listint_t *previousnode;

    while (head)
    {
        previousnode = head;
        head = head->next;
        free(previousnode);
    }
    
    free(head);
}