#include "main.h"
/**
 * print_chessboard - Function used to print chessboard
 * @a: the row in which the array is located
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b = b + 1)
	{
		for (c = 0; c < 8; c = c + 1)
		{
			if (c == 7)
			{
				_putchar(a[b][c]);
				_putchar('\n');
			}
			else
				_putchar(a[b][c]);
		}
	}
}
