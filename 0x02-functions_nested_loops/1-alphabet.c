#include "holberton.h"
/**
 * print_alphabet - This prints alphabet in lowercase
 *
 * Return: This returns 0 maeaning Success
*/

void print_alphabet(void)
{
int i = 0;
for (i = 97; i < 123; i++)
{
	putchar(i);
}
putchar('\n');
}
