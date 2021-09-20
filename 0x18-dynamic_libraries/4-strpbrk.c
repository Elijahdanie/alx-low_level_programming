#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: the string to check for occurence
 * @accept: the set of bytes to look for in s
 * Return: Returns a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
char *finalptr = '\0';
char *ptrcache = accept;
int seen = 0;
while (*s)
{
while (*accept)
{
if (*accept == *s)
{
seen = 1;
break;
}
accept++;
}
if (seen == 1)
{
finalptr = s;
break;
}
s++;
accept = ptrcache;
}
return (finalptr);
}
