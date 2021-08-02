#include "lists.h"
#include <stdlib.h>

void free_listint2(listint_t **head)
{
    listint_t *previous;

    if(head == NULL)
    {
        return;
    }

    while(*head)
    {
        previous = *head;
        *head = (*head)->next;
        free(previous);
    }

    free(*head);
    head = 0;
}