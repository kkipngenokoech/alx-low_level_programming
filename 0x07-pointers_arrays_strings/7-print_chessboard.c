#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - printing a chessboard
 * @a:rows to be printed
 * Return: return zero or void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int row, column;

	column = 0;
	for (row = 0; row < 64; row++)
	{
		if (row % 8 == '\0' && row != 0)
		{
			column = row;
			_putchar('\n');
		}
		_putchar(a[row / 8][row - column];
	}
	_putchar('\n');
}
