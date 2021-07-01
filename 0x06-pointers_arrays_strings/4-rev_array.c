#include "holberton.h"

/**
 *char *reverse_array - This reverses am integer array
 *@a: this is the pointer to the int array passed in
 *@n: this is the size of the int array
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	for (i = n - 1; i > (n / 2); i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}

