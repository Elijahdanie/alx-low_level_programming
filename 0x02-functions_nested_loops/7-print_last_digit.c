#include "holberton.h"

/**
 * print_last_digit - This prints the last digit
 * of an integer
 *
 *@val: this is the variable which gets last digit printed
 *Return: returns the last digit of the int value passed in
 */

int print_last_digit(int val)
{
	int c = 0;
	
	c = c % 10;
	if (val < 0)
	{
		c = -1 * val;
	}
	_putchar(c + '0');
	return (c);
}

