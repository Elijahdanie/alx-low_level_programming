#include "holberton.h"

/**
 * print_line - this draws a straight line in terminal
 *
 * @n: this is the length
 *
 */

void print_line(int n)
{
int i = 0;

if  (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
