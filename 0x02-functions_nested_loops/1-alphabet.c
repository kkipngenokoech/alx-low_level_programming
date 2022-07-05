#include <stdio.h>
#include "main.h"
/**
 * print_alphabet  - prints the alphabet in lower letters
 */
void print_alphabet(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
