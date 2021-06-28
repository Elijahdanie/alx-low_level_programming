#include "holberton.h"

/**
 * print_rev - this prints string in reverse
 * @s: this is the pointer passed into the function
 */

void print_rev(char *s)
{
int length, i = 0;
while (*s++)
{
length++;
}
for (i = length; i > 0; i--)
{
   _putchar(s[i]);
}
}
