#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @s: string passed as a parameter
 * Return: void
 */
void print_rev(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	counter -= 1;
	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar('\n');
}
