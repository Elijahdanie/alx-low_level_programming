#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - removes the head of the list
 * @head: pointer to the list
 * Return: returns an integer
 */
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
