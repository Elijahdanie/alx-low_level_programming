#include "holberton.h"

/**
 * print_diagonal - this is prints a diagonal line on the terminal
 *
 * @n: this is the length of the diagonal
 *
 */

void print_diagonal(int n)
{
int i, k = 0;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (k = 1; k <= i; k++)
{
if(i != 0)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
