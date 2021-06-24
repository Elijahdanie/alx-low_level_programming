#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if(a > b && a > c)
{
largest = a;
}
if(b > c && b > a)
{
largest = b;
}
else if (c > a && c > b)
{
largest = c;
}
else if (c == a)
{
largest = c > b ?c : b;
}
else if (c == b)
{
largest = a > c ? a : c;
}
else if (a == b)
{
largest = c > a? c : a;
}

return (largest);
}
