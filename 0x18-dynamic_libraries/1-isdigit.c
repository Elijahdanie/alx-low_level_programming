#include "main.h"

/**
 * _isdigit - this checks for numbers that are digits
 * @c: this is the ascii of the letter
 * Return: Returns 1 if upper and zero if its any other thing else
 */

int _isdigit(int c)
{
return (c >= 48 && c <= 57 ? 1 : 0);
}
