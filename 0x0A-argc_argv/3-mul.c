#include "holberton.h"
#include <stdio.h>
#include<string.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int fnum, snum = 0, result = 0;
    if(argc == 3)
    {
        fnum = atoi(argv[1]);
        snum = atoi(argv[2]);
        result = fnum * snum;
        printf("%d\n", result);
        return 0;
    }
    else
    {
        printf("Error\n");
        return 1;
    }
}
