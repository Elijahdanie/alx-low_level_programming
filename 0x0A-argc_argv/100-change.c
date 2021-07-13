#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 *main-thie is the entry point for the program
 *@argc:this is the number of command line arguments
 *@argv:this is an array that stores the command line arguments
 *Return:returns 0 if success or 1 if error
*/

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	if (!is_positive_number(argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", number_of_coins(cents));

	return (0);
}
