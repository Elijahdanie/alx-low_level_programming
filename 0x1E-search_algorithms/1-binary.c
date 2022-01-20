#include "search_algos.h"

/**
 * print - This prints message on screen
 * @array: array to print
 * @left: the left index
 * @right: the right index
 * Return: void
 */
void print(int *array, int left, int right)
{
	int len = 0;

	len = left;
	printf("Searching in array: ");
	while (len <= right)
	{
		if (len != right)
		{
			printf("%d, ", array[len]);
		}
		else
		{
			printf("%d", array[len]);
		}
		len++;
	}
	printf("\n");
}


/**
 * binary_search - This looks for an element in an array
 * using binary search
 * @array: the array containing elements
 * @size: the size of array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = 0, mid = 0;

	right = size - 1;

	if (!array || right <= 0)
	{
		return (-1);
	}
	while (left < right)
	{
		print(array, left, right);
		mid = ((right - left) / 2) + left;
		if (array[right] == value)
		{
			return (right);
		}
		else if (array[left] == value)
		{
			return (left);
		}
		else if (array[mid] == value)
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			left = mid + 1;
		}
		else if (value < array[mid])
		{
			right = mid - 1;
		}
	}
	return (-1);
}
