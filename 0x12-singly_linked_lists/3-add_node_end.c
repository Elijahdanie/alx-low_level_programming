#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *newnode;
    list_t *lastnode;
    unsigned int len = 0;
    const char *strtemp;

    if(str == NULL)
    {
        return (NULL);
    }

    newnode = malloc(sizeof(list_t));
    
    if (newnode == NULL)
    {
        return (NULL);
    }

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
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
        return (newnode);
    }
    lastnode = *head;
    while (lastnode->next)
    {
        lastnode = lastnode->next;
    }
    lastnode->next = newnode;
    
    return (newnode);
}
