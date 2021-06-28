#include "holberton.h"

/**
 * _puts - this prints a string followed by a new line
 * @str: this is the pointer passed into the function
 */

void _puts(char *str)
{
_putchar(*str);
while (*str++)
{
_putchar(*str);
}
_putchar('\n');
}
