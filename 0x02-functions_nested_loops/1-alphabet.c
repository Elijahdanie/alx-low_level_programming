#include "holberton.h"
/**
 * main- Entry point for this program
 *
 * Return: This returns 0 maeaning Success
*/
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet_x10(void)
{
int i = 0;
for (i = 97; i < 123; i++)
{
	putchar(i);
}
putchar('\n');
}
