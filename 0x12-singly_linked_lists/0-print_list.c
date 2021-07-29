#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int numnodes = 0;

	while (h != NULL)
	{
		numnodes++;
		printf("[%d] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);
		h = h->next;
	}
	return (numnodes);
}

