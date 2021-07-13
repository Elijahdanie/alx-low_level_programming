#include "holberton.h"
#include<stdlib.h>
#include<stdio.h>

char *str_concat(char *s1, char *s2)
{
    char *finalptr;
    char *ptrcache;
    unsigned int i = 0;

    if(*s1 == '\0' )
    {
        *s1 = '\0';
    }

    if(*s2 == '\0' )
    {
        *s2 = '\0';
    }

    while (s1[i] || s2[i])
    {
        i++;
    }

    finalptr = malloc(i * sizeof(char) + 1);
    ptrcache = finalptr;
    
    while (*s1)
    {
        *finalptr = *s1;
        finalptr++;
        s1++;
    }
    
    while (*s2)
    {
        *finalptr = *s2;
        finalptr++;
        s2++;
    }
    
    finalptr = '\0';
    
    return ptrcache;
}