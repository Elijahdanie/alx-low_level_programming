#include<Holberton.h>
/**
* main - The Entry point for the program
*
*Return: Always return 0, success
*/


int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

int _islower(int c)
{
    if (c >= 65 && c<= 90)
    {
        return (0);
    }
    else if (c >=97 && c <= 122)
    {
        return (1);
    }
}