#include "search_algos.h"

/**
 * linear_search -This looks for the index of
 * 					value indicated
 * @array: This is the array to seach in
 * @size: this is the size of the array
 * @value: this is the value to search for
 * Return: returns the index if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
	{
	    return (-1);
	}
	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
