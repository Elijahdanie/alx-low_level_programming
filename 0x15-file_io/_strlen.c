#include "main.h"

/**
 * _stlen - length of a string
 * @text: the pointer to string
 */

int _strlen(char *text)
{
int len = 0;

while (text[len])
{
len++;
}
return len;
}
