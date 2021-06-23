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
			int n = i * k;

			if (n > 9)
			{
				int first = n / 10;
				int second = n % 10;

				_putchar(first + '0');
				_putchar(second + '0');
			}
			else
			{
				_putchar(n + '0');
				_putchar(' ');
			}
			if (n != 81)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}

