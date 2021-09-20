#include "main.h"

/**
 * _strspn - this gets the length of a prefix substring
 * @s: pointer to the string from which to get the substring accept
 * @accept: the bytes of the substring
 * Return: Returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int val = 0;
int check = 0, seen = 0;
char *ptrcache = accept;
while (*s)
{
while (*accept)
{
if (*s == *accept)
{
check++;
seen = 1;
}
accept++;
}
if (check != 0)
{
val += check;
}
else if (seen == 1)
{
break;
}
accept = ptrcache;
s++;
check = 0;
}
return (val);
}
