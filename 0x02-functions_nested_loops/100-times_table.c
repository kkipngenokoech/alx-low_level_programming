#include <stdio.h>
#include "main.h"
/**
 * print_times_table - printing times table
 * @n: parameter to be passed
 */
void print_times_table(int n)
{
	int start;
	int first;
	int second;
	int result;

	start = n;
	if (start > 15 || start < 0)
		return (0);
	else
	{
		for (first = 0; first <= start; first++)
		{
			for (second = 0; second <= start; second++)
			{
				result = first * second;
				if (first == start && second == start)
					_putchar(result);
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
