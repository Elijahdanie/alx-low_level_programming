#include "holberton.h"
/**
 * print_sign - this functions prints the sign of a number
 * 
 * n: This is the int value to be checked
 */
 
 int print_sign(int n)
 {
if (n > 0)
{
    _putchar('+');
    return(1);
}
    else if (n == 0)
{
    _putchar('0');
    return(0);
}
else if(n < 0)
{
    _putchar('-');
    return (-1);
}
    return (0);
 }
