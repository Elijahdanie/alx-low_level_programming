#include "holberton.h"
#include <stdio.h>

/**
 *main-thie is the entry point for the program
 *@argc:this is the number of command line arguments
 *@argv:this is an array that stores the command line arguments
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int lengh = argc - 1;
	printf("%d\n", lengh);
	return (0);
}

