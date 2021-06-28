#include "holberton.h"
#include<stdio.h>
/**
 * print_array - this prints the array of strings
 * @n: this is the length of the array
 * @a: this is the array pointer passed in
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
i++;
if (i != n)
{
printf(", ");
}
}
_putchar('\n');
}
