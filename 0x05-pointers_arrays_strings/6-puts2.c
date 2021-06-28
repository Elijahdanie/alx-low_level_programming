#include "holberton.h"
/**
 * puts2 - this prints everyother character of the string
 * @str: this is the pointer passed into the function
 */

void puts2(char *str)
{
int i = 0;
while (str[i])
{
if (i % 2 == 0 || i == 0)
{
_putchar(str[i]);
}
i++;
}
}
