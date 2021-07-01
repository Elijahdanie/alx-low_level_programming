#include "holberton.h"
/**
 * print_number - Prints the integer passed in
 * @n: integer passed in
*/

void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
i = -i;
_putchar('-');
}

if ((i / 10) > 0)
print_number(i / 10);

_putchar((i % 10) + '0');
}
