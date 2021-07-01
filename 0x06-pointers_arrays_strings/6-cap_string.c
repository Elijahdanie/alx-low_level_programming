#include "holberton.h"
#include<stdio.h>

/**
 *cap_string - This capitalizes first letter of words in the string
 *@p: pointer
 *Return: This returns the pointer to the string
 */

char *cap_string(char *p)
{
char *ptr = p;
int seenFirstLetter = 0;
char prev = *p;

if (prev >= 'a' && prev <= 'z')
{
    *p = (65 + (*p - 97));
}

while (*p)
{
if (*p >= 'a' && *p <= 'z')
{
seenFirstLetter++;
}
else
{
seenFirstLetter = 0;
}
if (seenFirstLetter == 1)
{
if (prev == ' ' ||
prev == '\t' ||
prev == '\n' ||
prev == ',' ||
prev == ';' ||
prev == '.' ||
prev == '!' ||
prev == '?' ||
prev == '"' ||
prev == '(' ||
prev == ')' ||
prev == '{' ||
prev == '}'
)
{
*p = (65 + (*p - 97));
}
}
prev = *p;
p++;
}
return (ptr);
}
