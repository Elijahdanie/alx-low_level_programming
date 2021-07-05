#include "holberton.h"

/**
 * _strchr - This function locates a character in a string
 * @c: the character to locate
 * @s: pointer to the string
 * Return: returns pointer to the first occurence of character
 */


char *_strchr(char *s, char c)
{
char *finalptr;
int seen = 0;
while (*s >= '\0')
{
if (*s == c)
{
finalptr = s;
seen = 1;
break;
}
s++;
}
if (seen == 0)
{
	*finalptr = '\0';
}
return (finalptr);
}
