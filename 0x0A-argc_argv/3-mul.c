#include "holberton.h"
#include <stdio.h>
#include<string.h>

int isNumber(char s[]);
int _isdigit(int);

int main(__attribute__((unused)) int argc, char *argv[])
{
    if (isNumber(argv[1]) && isNumber(argv[1]))
    {
        
    }
    else
    {
        printf("Error\n");
    }
    
}

int isNumber(char s[])
{
    for (int i = 0; s[i]!= '\0'; i++)
    {
        if (_isdigit(s[i]) == 0)
              return 0;
    }
    return 1;
}

int _isdigit(int c)
{
return (c >= 48 && c <= 57 ? 1 : 0);
}
