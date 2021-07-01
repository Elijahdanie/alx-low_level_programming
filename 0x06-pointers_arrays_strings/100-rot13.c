#include "holberton.h"



char *rot13(char *ptr)
{
char *finalptr = ptr;
while (*ptr++)
{
while ((*ptr >= 'a' && *ptr < 'n')
|| (*ptr >= 'A' && *ptr < 'N'))
{
*ptr = *ptr + 13;
ptr++;
continue;
}
if ((*ptr >= 'n' && *ptr <= 'z')
|| (*ptr >= 'N' && *ptr <= 'Z'))
{
*ptr = *ptr - 13;
}
}
return (finalptr);
}