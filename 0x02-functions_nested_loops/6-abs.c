#include "holberton.h"

/**
 * _abs- this computes the absolute value of an integer
 *
 *@val: this is the value to be amde absolute
 *
 *Return: returns absolute value of the int passed in
 */

int _abs(int val)
{
	if (val >= 0)
	{
		return (val);
	}
	else if (val < 0)
	{
		return (-1 * val);
	}
	return (0);
}

