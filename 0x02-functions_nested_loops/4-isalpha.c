#include "holberton.h"

/**
* _isalpha - this checks if the character is a letter
*
*@c: this is the ascii code of the character to check
*Return: Always return 0, success
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
return (0);
}
