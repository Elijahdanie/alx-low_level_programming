#include "holberton.h"

/**
 *_strcmp - This compares two char arrays
 *@s2: First String for comparision
 *@s1: Second String for comparison
 *Return: returns 1 if s1 greater than s2, -1 if otherwise ekse 0
 */

int _strcmp(char *s1, char *s2)
{
while (*s2)
{
if (*s1 > *s2)
{
return (15);
}
if (*s1 < *s2)
{
return (-15);
}
s1++;
s2++;
}
if (*s1)
{
return (1);
}
else
{
return (0);
}
}

