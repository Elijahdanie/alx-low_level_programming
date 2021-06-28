#include "holberton.h"
/**
 * puts_half - this prints the other half of a file
 * @str: this is the pointer passed into the function
 */

void puts_half(char *str)
{
int i, k, length = 0;

while(str[length])
{
length++;
}

if(length % 2 == 0)
{
k = (length)/2;
}
else
{
k = (length - 1)/2;
}

for (i = k; i < length; i++)
{
_putchar(str[i]);
}
}
