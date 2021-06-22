#include "holberton.h"
/**
*print_sign - this functions prints the sign of a number
*
*@n: This is the int value to be checked
*Return: returns 1 if greater than 0
* returns 0 if equal to 0 and return -1 if less than 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}

