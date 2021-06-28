#include "holberton.h"

/**
 * print_rev - this prints string in reverse
 * @s: this is the pointer passed into the function
 */

void print_rev(char *s)
{
int i = 0;

while (s[i])
{
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
