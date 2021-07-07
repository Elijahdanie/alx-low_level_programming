#include "holberton.h"

/**
  * _strlen_recursion - resolves the length of a string
  * @s: this is a pointer to the string
  * Return: returns the string length
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
