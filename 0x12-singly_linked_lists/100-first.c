  
#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));

/**
  * print_before_main - this print before the main function
  *
  * Return: Nothing.
  */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
