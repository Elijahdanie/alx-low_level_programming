#include "holberton.h"

/**
 *_strcat - This compares two char arrays
 *@s2: First String for comparision
 *@s1: Second String for comparison
 *Return: returns 1 if s1 greater than s2, -1 if otherwise ekse 0
 */

void reverse_array(int *a, int n)
{
int i = 0, temp = 0;

for (i = n - 1; i > (n/2); i++)
{
temp = a[n - 1 - i];
a[n - 1 - i] = a [i];
a[i] = temp;
}
    
}