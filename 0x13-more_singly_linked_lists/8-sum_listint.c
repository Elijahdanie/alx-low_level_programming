#include "lists.h"
#include <stdlib.h>

int sum_listint(listint_t *head)
{
    int sumvalue = 0;

    if (head == NULL)
    {
        return (0);
    }

    while (head)
    {
        sumvalue += head->n;
        head = head->next;
    }

    return (sumvalue);   
}