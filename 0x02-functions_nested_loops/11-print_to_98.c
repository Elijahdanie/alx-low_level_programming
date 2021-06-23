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

		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		int k = 0;

		for (k = n; k > 98; k--)
		{
			printf("%d, ", k);
		}
	}
}

