#include "holberton.h"

/**
 * swap_int - this swaps the value of two pointers
 * @n: this is the pointer passed into the function
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
