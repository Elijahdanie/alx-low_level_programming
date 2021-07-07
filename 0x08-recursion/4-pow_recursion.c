#include "holberton.h"

/**
 * _pow_recursion- this returns the value of a number to a power
 * @x: the original number
 * @y: its power
 * Return: returns the result
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if(y < 0)
{
return (-1);
}
return  (x * _pow_recursion(x, y - 1));
}
