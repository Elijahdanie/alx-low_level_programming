#include "holberton.h"
#include<stdio.h>
/**
 * rev_string - this reverses the string passed in
 * @s: this is the pointer passed into the function
 */

void rev_string(char *s)
{
int k = 0, i = 0;
char tmp;

while (s[i++])
k++;

for (i = k - 1; i >= k / 2; i--)
{
tmp = s[i];
s[i] = s[k - i - 1];
s[k - i - 1] = tmp;
}
}
