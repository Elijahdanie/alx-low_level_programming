#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double pointer to a lined list
 * @str: string to add to the new node
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
unsigned int len = 0;
const char *strtemp;

if (str == NULL)
{
return (NULL);
}
newnode = malloc(sizeof(list_t));

if (newnode == NULL)
{
return (NULL);
}
newnode->next = *head;
newnode->str = strdup(str);
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
strtemp = str;
while (strtemp[len])
{
len++;
}
newnode->len = len;

*head = newnode;
return (newnode);
}
