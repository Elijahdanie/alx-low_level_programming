#include "holberton.h"
#include "stdlib.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
char *finalptr;
unsigned int sizeofOriginal = 0, j = 0;

while (str[sizeofOriginal])
{
sizeofOriginal++;
}
finalptr = malloc(sizeof(char) * sizeofOriginal);
while (str[j])
{
finalptr[j] = str[j];
j++;
}
finalptr[j] = '\0';
return (finalptr);
}
