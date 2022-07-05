#include <stdio.h>
#include "main.h"
/**
 * main - prints the alphabet in lower letters
 *
 * Return: 0 always on success
 */
void print_alphabet(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
	return (0);
}
