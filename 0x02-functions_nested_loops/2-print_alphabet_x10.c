#include<holberton.h>
/**
 * main-Entry level for program
 *
 * Returm: Always success 0
 */

int main(void)
{
}

void print_alphabet_x10(void)
{
	int i = 0, k = 0;
	for (; i < 10; i++)
	{
		for(k = 97; k < 123; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}

