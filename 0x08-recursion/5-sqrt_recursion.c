#include "holberton.h"

/**
 * _sqrt_recursion - this finds the squareroot of a number
 * @n: this is the number
 * Return: returns the square root as int
 */

int _sqrt_recursion(int n)
{
    int checker = 0;

   return (findSqrt(checker, n));
}

/**
 * findSqrt - this uses a checker variable to search for squareroot
 * @checker: this is the number that gets incremented to check
 * @targetNum: this is the square
 * Return: returns the squareroot
 */

int findSqrt(int checker, int targetNum)
{
    int testValue = checker * checker;

    if (testValue > targetNum)
    {
        return (-1);
    }

    if (testValue == targetNum)
    {
        return (checker);
    }

    return (findSqrt(checker + 1, targetNum));
}
