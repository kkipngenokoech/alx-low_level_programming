#include<stdio.h>
#include "main.h"

/**
 * print_line - function that print underscores
 * Return: always return 0
 */
void print_line(int n)
{
	int row;

	if (n > 0)
	{
		for (row = 0; row < n; row ++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
