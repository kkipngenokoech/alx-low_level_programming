#include <stdio.h>
#include "main.h"

/**
 * print_numbers -  prints numbers ranging from 0 to 1
 *
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
