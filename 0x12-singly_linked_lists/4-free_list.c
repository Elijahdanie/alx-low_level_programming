#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 * Return: void
 */
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