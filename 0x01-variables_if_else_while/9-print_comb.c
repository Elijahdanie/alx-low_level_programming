#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: its 0 and always success
 */
int main(void)
{
int iteration = 28;
int counter = 0;
int numbervariants = 48;
for (int j = 0; j < 28; j++)
{
int asciivalue = 0;
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
putchar("\n");
return (0);
}
