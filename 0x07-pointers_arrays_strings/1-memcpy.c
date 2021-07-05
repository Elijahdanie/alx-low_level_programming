#include "holberton.h"

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

while (n > 0 && *src)
{
*dest = *src;
src++;
dest++;
n--;
}
return (ptr);
}
