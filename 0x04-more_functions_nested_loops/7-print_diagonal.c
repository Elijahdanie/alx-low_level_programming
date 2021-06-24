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

if(n > 0)
{
for (i = 0; i < n; i++)
{
for (k = 0; k < (i+1); k++)
{
    _putchar(32);
}
_putchar(92);
    _putchar('\n');
}
}
else
{
_putchar('\n');
}
}
