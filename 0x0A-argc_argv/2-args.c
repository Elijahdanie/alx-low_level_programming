#include "holberton.h"
#include <stdio.h>

/**
 *main-thie is the entry point for the program
 *@argc:this is the number of command line arguments
 *@argv:this is an array that stores the command line arguments
 *Return:returns 0 if success or 1 if error
*/

int main(int argc, char *argv[])
{
	while (argc > 0)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	return (0);
}
