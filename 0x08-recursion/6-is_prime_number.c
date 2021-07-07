#include "holberton.h"

/**
  * is_prime_number - Checks for a prime number
  * @n: the number to be checked
  * Return: returns 0 if not prime and 1 if prime
  */
int is_prime_number(int n)
{
int checker = 2;

if (n <= 2)
{
return(0);
}
return (checkEquality(checker, n));
}

/**
  * check_prime - this recursively checks for the prime
  * @targetNum: the number to be checked
  * @checker: the iteration times
  * Return: 1 for prime or 0 composite
  */
int checkEquality(int checker, int targetNum)
{
if (targetNum % checker == 0)
{
return (0);
}
else if (targetNum / checker == 1)
{
return (1);
}
else
return (checkEquality(checker + 1, targetNum));
}
