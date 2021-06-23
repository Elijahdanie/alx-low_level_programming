#include "holberton.h"
#include<stdio.h>

/**
 *print_to_98- this function prints values passed in to 98
 *@n: this is the value passed in
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int i = 0;

		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		int k = 0;

		for (k = n; k > 97; k--)
		{
			printf("%d", k);
			if (k != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

