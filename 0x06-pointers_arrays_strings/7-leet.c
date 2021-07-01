#include "holberton.h"

/**
 *_strcat - This compares two char arrays
 *@s2: First String for comparision
 *@s1: Second String for comparison
 *Return: returns 1 if s1 greater than s2, -1 if otherwise ekse 0
 */

char *leet(char *ptr)
{
char encodersCap [] = "A, E, O, T, L";
char encodersLower [] = "a, e, o, t, l";
char fillers [] = "4, 3, 0, 7, 1";
int  i = 0;
char *finalptr = ptr;

while (*ptr)
{
for (i = 0; i < 14; i++)
{
if (*ptr == encodersCap[i] ||
 *ptr == encodersLower[i])
{
*ptr = fillers[i];
break;
}
}
ptr++;
}
return finalptr;
}
