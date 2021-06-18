#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: its 0 and always success
 */
int main(void)
{
int i, k =0;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (k = 97; k < 103; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}
