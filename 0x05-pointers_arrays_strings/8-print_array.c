#include "holberton.h"
#include<stdio.h>
/**
 * print_array - this sets the value of a pointer to
 * @n: this is the pointer passed into the function
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
i++;
if(i != n)
{
printf(", ");
}
}
}
