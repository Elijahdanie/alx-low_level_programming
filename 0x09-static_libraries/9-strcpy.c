#include "holberton.h"
/**
 * _strcpy - this copies a string from src to destination
 * @src: this is the source string to be copied
 * @dest: this is where the string would be copied to
 * Return: This returns the pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
