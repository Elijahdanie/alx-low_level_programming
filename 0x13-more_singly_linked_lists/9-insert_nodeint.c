#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Sums all the values of the list
 * @head: pointer to the first node of list
 * @idx: index to insert
 * @n: the data to insert at node
 * Return: returns address to node
 */
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
if (iterator == idx)
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
