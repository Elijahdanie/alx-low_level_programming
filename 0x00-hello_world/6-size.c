#include<stdio.h>

/**
 *main - Start of the program
 *
 *Description: prints sizes of various data types
 *
 *Return: This is 0 meaning code passed
 */

int main(void)
{
  printf("Size of an char is %d bytes", sizeof(char));
  printf("Size of a int is %d bytes\n", sizeof(int));
  printf("Size of a long int is %d bytes\n", sizeof(long int));
  printf("Size of a long long int is %d\n", sizeof(long long int));
  printf("Size of a float is %d\n", sizeof(float));
}
