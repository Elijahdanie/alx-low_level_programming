#include "holberton.h"

/**
 *_strncat - This adds the content of source to destination
 *@dest: this is the string that gets added to
 *@src: this is the string to be added
 *@n: this is the measure to which it will concat
  *Return: returns a pointer to the final value
 */

char *_strncat(char *dest, char *src, int n)
{
int length, srclength = 0;
char *finalptr = dest;

if (*dest == '\0' || *src == '\0')
{
finalptr = '\0';
return (finalptr);
}
while(*dest)
{
    dest++;
}
while (*src && n)
{
    *dest++ = *src++;
}

*dest = '\0';

return (finalptr);
}
