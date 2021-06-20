#include <stdio.h>

/**
*main - Entry point
*
*
* Return: Always success
*/

int main(void)
{
int i, k, j = 0;
for (i = 0; i < 10; i++)
{
for (k = j; k < 10; k++)
{
if (i != k)
{
putchar(i + '0');
putchar(k + '0');
putchar(',');
}
}
j++;
}
return (0);
}
