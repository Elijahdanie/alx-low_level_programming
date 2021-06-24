#include "holberton.h"

/**
 * more_numbers - this prints numbers
 *
 *
*/

void more_numbers(void)
{
int i, k = 0, f = 0, s = 0;

for (k = 0; k < 10; k++)
{
for (i = 0; i < 15; i++)
{
if  (i <= 9)
{
f = i;
}
else
{
f = i / 10;
s = i % 10;
}
_putchar(f + '0');
if  (i > 9)
{
_putchar(s + '0');
}
}
}
}
