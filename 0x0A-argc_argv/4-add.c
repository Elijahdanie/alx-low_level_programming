#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main(int argc, char *argv[])
{
    int i, sum = 0, j= 0;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        j = 0;
        while (argv[i][j])
        {
            if(isdigit(argv[i][j]) == 0)
            {
                printf("Error");
            return (1);
            }
            j++;
        }
         sum += atoi(argv[i]);
    }
    printf("%d", sum);
    return (0);
}

