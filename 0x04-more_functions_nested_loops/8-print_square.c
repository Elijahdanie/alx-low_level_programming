#include "holberton.h"

/**
 * print_square - this prints a quare
 *
 * @size: this is the size of the square
 *
 */

void print_square(int size)
{
int i, k = 0;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (k = 0; k < size; k++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
