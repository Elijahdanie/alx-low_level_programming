#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the head
 * @head: pointer to the list
 * @n: this is the data to be added
 * Return: returns the address of the node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (*head);
}
