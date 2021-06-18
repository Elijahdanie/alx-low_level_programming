#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: its 0 and always success
 */
int main(void)
{
int i = 0;
for (i = 97; i < 123; i++)
{
char a = (char)i;
if (a != 'q' && a != 's')
{
putchar(a);
}
}
putchar('\n');
return (0);
}
