#include "holberton.h"

/**
 * print_last_digit - This prints the last digit
 * of an integer
 * 
 * val: this is the variable which gets last digit printed
 */

int print_last_digit(int val)
{
    val = val % 10;
    _putchar(val + '0');
    return (val);
}
