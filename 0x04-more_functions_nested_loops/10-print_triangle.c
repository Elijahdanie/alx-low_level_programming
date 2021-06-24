#include "holberton.h"

/**
 * print_triangle - this function prints a triangle
 *
 * @size: this is the size of the triangle
 *
 */


void print_triangle(int size)
{
int i = 0, k = 0, l = 0;

if (size > 0)
{
for (i = 1; i <= size; i++)
{
k = size - i;
l = i;
for (; k > 0; k--)
{
_putchar(32);
}
for (; l > 0; l--)
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
