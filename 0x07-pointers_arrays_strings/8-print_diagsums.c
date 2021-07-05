#include "holberton.h"
#include<stdio.h>

/**
 * print_diagsums - this prints sum of diagonals of a square matrix
 *@a: this is the pointer to the 2d array
 *@size: this is the size of the 2d array
*/

void print_diagsums(int *a, int size)
{
int i, j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		k += a[i];
		a -= size;
	}

	printf("%d, %d\n", j, k);
}
