#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - printing out numbers from 0 to 9 but skips 2 and 4 nums
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if ( ! (ch == '2' || ch == '4'))
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
