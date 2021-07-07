#include "holberton.h"

/**
  * _puts_recursion - this prints a string recursively
  * @s: pointer to string to be printed
*/

void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
       return;
    }
    _putchar(*s);
    s++;
    _puts_recursion(s);
}
