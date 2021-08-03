#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to the list
 * @index: index of node to delete
 * Return: returns 1 on success or -1 on error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *tmpHead = *head;
	unsigned int node;

	if (tmpHead == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmpHead);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (tmpHead->next == NULL)
			return (-1);

		tmpHead = tmpHead->next;
	}

	tmp = tmpHead->next;
	tmpHead->next = tmp->next;
	free(tmp);
	return (1);
}
