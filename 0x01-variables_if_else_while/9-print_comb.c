#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: its 0 and always success
 */
int main(void)
{
int j, iteration = 28, counter = 0, numbervariants = 48, asciivalue = 0;
for (j = 0; j < 28; j++)
{
switch (counter)
{
case 0:
asciivalue = numbervariants;
numbervariants++;
break;
case 1:
asciivalue = 44;
break;
case 2:
asciivalue = 32;
break;
default:
break; 
}
counter++;
if (counter > 2)
{
counter = 0;
}
putchar(asciivalue);
}
putchar('\n');
return (0);
}
