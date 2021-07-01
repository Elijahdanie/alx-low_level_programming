#include "holberton.h"

/**
 *_strcat - This compares two char arrays
 *@s2: First String for comparision
 *@s1: Second String for comparison
 *Return: returns 1 if s1 greater than s2, -1 if otherwise ekse 0
 */

char *string_toupper(char *p)
{
int tmp = 0;
char *ptr = p;
char upper;

for(; *p != '\0'; p++)
{
if (*p > 97 && *p < 122)
{
tmp = *p - 97;
upper = 65 + tmp;
*p = upper;
}
}
return ptr;
}