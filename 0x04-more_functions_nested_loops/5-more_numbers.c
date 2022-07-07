#include "main.h"

/**
 * more_numbers -  function that prints 10 times number fro 0 to 14
 * Return zero
 */
void more_numbers(void)
{
	int number, row;

	for (row = 0; row < 10; row++)
	{
		for (number = 0; number < 15; number++)
			{
				if (ch >= 10)
				{
					_putchar((ch / 10) + 48);
				}
				_putchar((ch % 10) + 48);
			}
		_putchar('\n');
	}
}
