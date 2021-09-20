#include "main.h"

/**
 * _memset - This fills memory with a constant byte
 * @s: this is the pointer to the memeory area to be filled
 * @b: this is the constant byte
 * @n: this is the number of bytes to be filled
 * Return: Returns a pointer to *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i = 0;

for (i = 0; i < n; i++)
{
	*s++ = b;
}
	return (ptr);
}
