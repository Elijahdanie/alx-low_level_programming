#include "holberton.h"
#include<stdio.h>

/**
 * print_chessboard - this prints the chessboard.
 * @a: the 2d array representing the chess board
 */

void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;

while (a[i][7])
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
i++;
}
}
