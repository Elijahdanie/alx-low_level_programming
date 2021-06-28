#include "holberton.h"
#include<stdio.h>
/**
 * print_array - this prints the array of strings
 * @n: this is the length of the array
 * @a: this is the array pointer passed in
 */

void print_array(int *a, int n)
{
int index;

for (index = 0; index < n; index++)
{
printf("%d", a[index]);

if (index == n - 1)
continue;

printf(", ");
}

printf("\n");
}
