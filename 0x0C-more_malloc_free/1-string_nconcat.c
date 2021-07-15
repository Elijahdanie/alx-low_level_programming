#include "holberton.h"
#include <stdlib.h>

/**
  * string_nconcat - this concatenates s1 , s2  with s2 by n bytes
  * @s1: a parameter
  * @s2: the string conctenated by nbytes
  * @n: ...
  *
  * Return: ...
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lengths1 = 0, j = 0, lengths2 = 0, l = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lengths1])
		lengths1++;

	while (s2[lengths2])
		lengths2++;

	if (n >= lengths2)
		l = lengths1 + lengths2;
	else
		l = lengths1 + n;

	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);

	lengths2 = 0;
	while (j < l)
	{
		if (j <= lengths1)
			ptr[j] = s1[j];

		if (j >= lengths1)
		{
			ptr[j] = s2[lengths2];
			lengths2++;
		}
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
