#include "main.h"

/**
 * _memcpy - This function copies memory area
 * @dest: the memory area to be copied to
 * @src: the memory area to be copied from
 * @n: this is the number of bytes to be copied
 * Return: returns a pointer to destination
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (ptr);
}
