#include "holberton.h"
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

/**
 *main-thie is the entry point for the program
 *@argc:this is the number of command line arguments
 *@argv:this is an array that stores the command line arguments
 *Return:returns 0 if success or 1 if error
*/

int main(int argc, char *argv[])
{
	int fnum, snum = 0, result = 0;

	if (argc == 3)
	{
		fnum = atoi(argv[1]);
		snum = atoi(argv[2]);
		result = fnum * snum;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
