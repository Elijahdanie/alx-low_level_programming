#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: its 0 and always success
 */

int main(void)
{
int i, k = 0;
for (i = 97; i < 123; i++)
{
putchar(i);
}
for (k = 65; k < 91; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}
