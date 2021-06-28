#include "holberton.h"

/**
 *_strlen- this gives the length of a string
 * @s: this is the pointer passed into the function
 */

int _strlen(char *s)
{
int i = 0;
while (*s++)
{
i++;
}
return (i);
}
