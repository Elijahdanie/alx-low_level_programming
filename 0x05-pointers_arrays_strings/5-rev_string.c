#include "holberton.h"
#include<stdio.h>
/**
 * print_rev - this prints string in reverse
 * @s: this is the pointer passed into the function
 */

void rev_string(char *s)
{
char temp;
int length = 0, k = 0;


while (s[length])
{
    length++;
}

for (length = length - 1; length > 0; length--)
{
    temp = s[length];
   s[length] = s[k];
      s[k] = temp;
   k++;
}
}