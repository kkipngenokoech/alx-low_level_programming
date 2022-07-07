#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints backslashes diagonally
 * @n: parameter to be passed
 * Return: returns zeto
 */
void print_diagonal(int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
