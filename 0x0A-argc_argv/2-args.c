#include "holberton.h"
#include <stdio.h>

/**
 *main-thie is the entry point for the program
 *@argc:this is the number of command line arguments
 *@argv:this is an array that stores the command line arguments
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	while (*argv++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}

