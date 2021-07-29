#include "lists.h"



size_t print_list(const list_t *h)
{
    while (h != NULL)
    {
        printf("[%d] %s", h->len, h->str == NULL?"(nil)":h->str);
        h = h->next;
    }
    
}