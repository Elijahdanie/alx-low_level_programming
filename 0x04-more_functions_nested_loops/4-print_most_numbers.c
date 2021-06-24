#include "holberton.h"

/**
 * print_most_numbers - this prints numbers
 *
*/

void print_most_numbers(void)
{
int i = 0, k = 0;

for (i = 48; i < 58; i++)
{
if (k != 2 && k != 4)
{
_putchar(i);
}
k++;
}
_putchar('\n');
}
