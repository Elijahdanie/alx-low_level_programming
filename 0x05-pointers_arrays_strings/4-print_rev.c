#include "holberton.h"

/**
 * print_rev - this prints string in reverse
 * @s: this is the pointer passed into the function
 */

void print_rev(char *s)
{
int length = 0;

while (s[length])
{
    length++;
}
for (length = length - 1; length > 0; length--)
{
    _putchar(s[length]);
}
_putchar('\n');
}
