#include "holberton.h"

/**
 * _strcat -This adds the content of source to destination
 *@dest: this is the string that gets added to
 @src: this is the string to be added
 @n: this is the measure to which it will concat
 */

char *_strncpy(char *dest, char *src, int n)
{
char *finalptr = dest;

if (*dest == '\0')
{
finalptr = '\0';
return finalptr;
}

while (*src && n)
{
    *dest++ = *src++;
    n--;
}

*dest = '\0';
return finalptr;
}