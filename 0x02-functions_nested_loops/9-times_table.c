#include "holberton.h"
/**
 * times_table - this prints the 9 times table
 */

void times_table(void)
{
	int i = 0, k = 0;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			_putchar(i * k);
			_putchar(32);
			_putchar(44);
		}
		_putchar('\n');
	}
}

