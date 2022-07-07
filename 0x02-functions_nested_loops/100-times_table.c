#include <stdio.h>
#include "main.h"
/**
 * print_times_table - printing times table
 * @n: parameter to be passed
 * Return : returns void
 */
void print_times_table(int n)
{
	int start;
	int first;
	int second;
	int result;

	start = n;
	if (!(start > 15 || start < 0))
	{
		for (first = 0; first <= start; first++)
		{
			for (second = 0; second <= start; second++)
			{
				result = first * second;
				if (first == start && second == start)
					_putchar('0' + rep / 10);
					_putchar('0' + rep % 10);
				else
				{
					_putchar(result);
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
