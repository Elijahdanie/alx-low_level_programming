#include "holberton.h"

/**
 *_strncpy -This copies the string from src to dest
 *@dest: this is the pointer that gets copied to
 *@src: this is the string to be copied
 *@n: this is the measure to which it will copy
  *Return: returns a pointer to the final value
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