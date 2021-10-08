#include "lists.h"


/**
 * len - calculate double linked list len.
 * @h:  pointer to head.
 *
 * Return: returns the number of elements in a linked dlistint_t list.
 */
size_t len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * *insert_dnodeint_at_index - function inserts new node at given position
 *
 *@h: pointer to pointer of head of linked list
 *@idx: unsigned int index position
 *@n: int data
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h;
	dlistint_t *newnode;
	dlistint_t *tmp;
	unsigned int iterator = 0;

	if (idx == len(*h))
	{
		newnode = add_dnodeint_end(h, n);
	}

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return NULL;
	}
	newnode->n = n;

	if (head == NULL && idx == 0)
	{
		head = newnode;
		return newnode;
	}

	while (head)
	{
		if (iterator == idx)
		{
			tmp = head->prev;
			newnode->prev = tmp;
			newnode->next = head;
			return newnode;
		}
		head = head->next;
		iterator++;
	}
	return NULL;
}
