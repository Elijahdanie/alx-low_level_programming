#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the memory occupied by the list
 * @head: pointer to the first node of the list
 * Return: returns void
 */
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

