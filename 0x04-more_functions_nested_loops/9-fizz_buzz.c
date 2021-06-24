#include "holberton.h"
#include<stdio.h>

/**
 * maiin - The Entry point of the program
 *
 */

int main(void)
{
int i = 0;

for (i = 1; i < 100; i++)
{
if ((i % 3) == 0 && (i % 5) != 0)
{
    printf("Fizz ");   
}
else if ((i % 3) == 0 && (i % 5) == 0 && i > 0)
{
    printf("FizzBuzz ");
}
else if((i % 5) == 0 && (i % 3) != 0)
{
    printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
return (0);
}
