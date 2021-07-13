#include "holberton.h"
#include<stdlib.h>

/**
 * create_array - main entry
 * @size: size input
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
char *ptr = malloc(sizeof(char) * size);
size_t i = 0;

if (ptr == '\0' || size == 0)
{
return ('\0');
}
while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}
