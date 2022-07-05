#include <stdio.h>
#include "main.h"
/**
 * times_table - prints timetable
 */
void times_table(void)
{
	int index;
	int row;

	for (row = 0; row <= 9; row++)
	{
		for (index = 0; index <= 9; index++)
		{
			_putchar(index*row);
			if (index == 9)
			{
				_putchar('$');
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

