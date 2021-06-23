#include "holberton.h"
/**
 * print_times_table - this function prints the table of the int passed in
 *
 */

void print_times_table(int q)
{
	int i = 0, k = 0;
    int m = q + 1;
	for (i = 0; i < m; i++)
	{
		_putchar('0');
		_putchar(44);
		for (k = 1; k < m; k++)
		{
			int n = i * k;

			if (k != 0)
			{
				_putchar(' ');
			}
			if (n > 9)
			{
				int first = n / 10;
				int second = n % 10;
                if(n > 99)
                {
                    int first = n / 10;
				    int second = n % 10;
                }

				_putchar(first + '0');
				_putchar(second + '0');
				if (k != q)
				{
					_putchar(44);
				}
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
				if (k != q)
				{
					_putchar(44);
				}
			}
		}
		_putchar('\n');
	}
}

