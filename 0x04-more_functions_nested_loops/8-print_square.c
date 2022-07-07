#include<stdio.h>
#include "main.h"

/**
 * print_square - prints hashes
 * Return: always 0
 */
void print_square(int size)
{
	int row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
