#include "main.h"
#include <stdio.h>
/**
 * _puts - pints a string followed by a newline
 * @str: parameter passed for the string
 * Return: void
 */
void _puts(char *str)
{
	int counter;
	
	counter = 0;
	while (str[counter] != '\0')
		_putchar(str[counter]);
	_putchar('\n');
}
