#include "holberton.h"
#include<stdio.h>

/**
 *_strcat - This compares two char arrays
 *@s2: First String for comparision
 *@s1: Second String for comparison
 *Return: returns 1 if s1 greater than s2, -1 if otherwise ekse 0
 */

char *cap_string(char *p){
char *ptr = p;
int seenFirstLetter = 0;
char prev = *p;

while(*p)
{
if(*p > 'a' && *p < 'z')
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
*p = 65 + (*p - 97);
}
}
prev = *p;
p++;
}
return ptr;
}
