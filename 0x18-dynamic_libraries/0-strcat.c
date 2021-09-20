#include "main.h"

/**
 *_strcat - This adds the content of source to destination
 *@dest: this is the string that gets added to
 *@src: this is the string to be added
 *Return: returns a pointer to the final value
 */

char *_strcat(char *dest, char *src)
{
int length, srclength = 0;
char *finalptr = dest;
for (length = 0; dest[length] != '\0'; length++)
{
}
for (srclength = 0; src[srclength] != '\0'; srclength++)
{
dest[length] = src[srclength];
length++;
}
dest[length] = '\0';
return (finalptr);
}
