#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
    list_t *previous;
    while (head)
    {
        previous = head;
        head = head->next;
        free(previous);
        free(previous->str);
    }
}