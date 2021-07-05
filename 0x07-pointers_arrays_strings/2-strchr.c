#include "holberton.h"

/**
 * _strchr - This function locates a character in a string
 * @c: the character to locate
 * @s: pointer to the string
 * Return: returns pointer to the first occurence of character
 */


char *_strchr(char *s, char c)
{
char *finalptr = '\0';
while (*s)
{
if(*s == c)
{
finalptr = s;
break;
}
s++;
}
return finalptr;
}
