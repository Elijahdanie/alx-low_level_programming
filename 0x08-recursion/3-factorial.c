#include "holberton.h"

/**
 *  factorial - this calculates the factorial of a number
 * @n: this is the number to be calculated
 * Return: returns the factorial of the number n
*/

int factorial(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    else if(n == 0)
    {
        return (1);
    }
    return (n * factorial(n - 1));
}
