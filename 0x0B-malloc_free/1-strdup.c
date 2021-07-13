#include "holberton.h"
#include "stdlib.h"

char *_strdup(char *str)
{
    char *finalptr;
    unsigned int sizeofOriginal = 0, j = 0;

    while (str[sizeofOriginal])
    {
        sizeofOriginal++;
    }

    finalptr = malloc(sizeofOriginal * sizeof(char) + 1);

    while (str[j])
    {
        finalptr[j] = str[j];
        j++;
    }

    finalptr[j] = '\0';
    return finalptr;
}