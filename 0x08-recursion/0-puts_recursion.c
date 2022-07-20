#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: string passed into the function to be printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	char index;

	while (s[index] != '\0')
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
