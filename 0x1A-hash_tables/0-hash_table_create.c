#include "main.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;
    unsigned long int iterator = 0;

    ht = malloc(sizeof(hash_node_t));

    if (ht == NULL)
    {
        return NULL;
    }

    ht->array = malloc(sizeof(hash_node_t *) * size);

    if (ht->array == NULL)
    {
        free(ht);
        return NULL;
    }
    
    for (iterator = 0; iterator < size; iterator++)
    {
        ht->array[iterator] = NULL;
    }
    
    return ht;
}