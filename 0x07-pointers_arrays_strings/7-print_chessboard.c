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
	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(*(*(row+a)+column));
		}
		_putchar('\n');
	}
}
