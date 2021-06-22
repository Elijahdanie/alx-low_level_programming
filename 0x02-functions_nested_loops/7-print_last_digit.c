#include "holberton.h"

/**
 * print_last_digit - This prints the last digit
 * of an integer
 */

int print_last_digit(int val)
{
    val = val % 10;
    _putchar(val + '0');
    return (val);
}
