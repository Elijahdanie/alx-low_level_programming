#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc -  reallocates a memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size: the old size
  * @new_size: the new size
  * Return: ...
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *finalptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		finalptr = malloc(new_size);

		if (finalptr == NULL)
			return (NULL);

		return (finalptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	finalptr = malloc(new_size);

	if (finalptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		finalptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (finalptr);
}
