#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Function used to print chessboard
 * @a: the row of the array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j = j + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}
