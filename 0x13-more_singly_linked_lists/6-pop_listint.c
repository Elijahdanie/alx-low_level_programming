#include "lists.h"
#include <stdlib.h>

int pop_listint(listint_t **head)
{
    listint_t *tmp;
    int nodedata;

    if (head == NULL || *head == NULL)
    {
        return (0);
    }
    else
    {
        tmp = (*head);
        nodedata = tmp->n;
        (*head) = tmp->next;
        free(tmp);
        return (nodedata);
    }
}
