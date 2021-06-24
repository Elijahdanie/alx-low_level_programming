#include "holberton.h"

/**
 * _isupper - this checks for upper case letters
 *
 * @c: this is the ascii of the letter
 *
 * Return: Returns 1 if upper and zero if its any other thing else
 */

int _isupper(int c)
{
return (c >= 65 || c <= 90 ? 1 : 0);
}
