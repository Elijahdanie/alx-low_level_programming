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

	while (*p)
	{
		seenFirstLetter = (*p >= 'a' && *p <= 'z') ? seenFirstLetter + 1 : 0;
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
			prev == '}' ||
			p == ptr)
			{
				*p = (65 + (*p - 97));
			}
		}
	prev = *p;
	p++;
	}
	return (ptr);
}
