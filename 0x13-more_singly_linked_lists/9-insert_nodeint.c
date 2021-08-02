#include "lists.h"
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int iterator = 0;
    listint_t *newnode;
    listint_t *tmpHead;

    if(head == NULL)
    {
        return (NULL);
    }

    newnode = malloc(sizeof(listint_t));

    if (newnode == NULL)
    {
        return (NULL);
    }

    newnode->n = n;
    tmpHead = *head;

    while (tmpHead)
    {
        if(iterator == idx)
        {
            newnode->next = tmpHead->next;
            tmpHead->next = newnode;
            return (newnode);
        }
        tmpHead = tmpHead->next;
        iterator++;
    }

    return (NULL);
}