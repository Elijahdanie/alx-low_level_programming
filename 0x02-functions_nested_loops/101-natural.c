#include<stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
int i = 0, totalval = 0;

for (i = 0; i < 1024; i++)
{
if (i != 1024)
{
if (i % 3 == 0 || i % 5 == 0)
{
totalval += i;
}
}
}
printf("%d\n", totalval);
return (0);
}
