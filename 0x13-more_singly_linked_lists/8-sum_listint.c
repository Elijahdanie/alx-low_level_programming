#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sums all the values of the list
 * @head: pointer to the first node of list
 * Return: returns the sum
 */
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