#include <stdlib.h>
#include "holberton.h"

/**
 * **alloc_grid - generates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or '\0' (Error)
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (height <= 0 || width <= 0)
		return ('\0');

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == '\0')
		return ('\0');

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == '\0')
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return ('\0');
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}