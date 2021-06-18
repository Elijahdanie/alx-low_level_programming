#include <stdlib.h>
#include <time.h>
/**
*more headers goes there 
*/

/**
* main- This is the entry point
*
*  Description: Indicates if random number is negetive or positive
*
*  Return: (0) Always Success
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastnumber = n % 10;
if (lastnumber < 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnumber);
}
else if (lastnumber > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastnumber);
}
else if (lastnumber == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastnumber);
}
return (0);
}
