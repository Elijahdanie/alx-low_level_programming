#include "holberton.h"

/**
 * print_square - this is prints a diagonal line on the terminal
 *
 * @n: this is the length of the diagonal
 *
 */

void print_square(int size)
{
int i, k = 0;

if(size > 0)
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