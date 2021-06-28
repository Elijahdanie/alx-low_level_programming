#include "holberton.h"

/**
 * swap_int - this swaps the value of two pointers
 * @a: this is the first int pointer
 * @b: this is the second int pointer
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
