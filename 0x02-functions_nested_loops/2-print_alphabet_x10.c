#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char character;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (character =  'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
