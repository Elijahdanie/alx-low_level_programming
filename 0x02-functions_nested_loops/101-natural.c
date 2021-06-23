#include<stdio.h>
/**
 * main- Entry point
 * 
 * Return: Always 0 success
 */

int main(void)
{
    int i = 0, totalval = 0;
    
    for (i = 0; i < 1024; i++)
    {
        totalval += i % 3 == 0 ? 1 : 0;
        totalval += i % 5 == 0 ? 1 : 0;
    }
    printf("%d\n", totalval);
}
