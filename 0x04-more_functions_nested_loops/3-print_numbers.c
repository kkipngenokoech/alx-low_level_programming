#include <stdio.h>
#include "main.h"

/**
 * print_numbers -  prints numbers ranging from 0 to 1
 *
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
