#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - retrieves node at index
 * @head: pointer to the first node of list
 * @index: the index of the node
 * Return: returns the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int indexatnode = 0;

if (head == NULL)
{
     return (NULL);
}
while(head)
{
if (indexatnode == index)
{
return head;
break;
}
head = head->next;
indexatnode++;
}
 return (NULL);
}