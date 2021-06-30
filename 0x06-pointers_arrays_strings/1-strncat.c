#include "holberton.h"

/**
 * _strcat -This adds the content of source to destination
 *@dest: this is the string that gets added to
 @src: this is the string to be added
 @n: this is the measure to which it will concat
 */

char *_strncat(char *dest, char *src, int n)
{
int length, srclength = 0;
char *finalptr = dest;

if (*dest == '\0' || *src == '\0')
{
finalptr = '\0';
return finalptr;
}

for(length = 0; dest[length] != '\0'; length++);

for (srclength = 0; srclength < n; srclength++)
{
dest[length] = src[srclength];
if (src[srclength] == '\0')
{
return finalptr;
}
length++;
}
dest[length] = '\0';
return finalptr;
}