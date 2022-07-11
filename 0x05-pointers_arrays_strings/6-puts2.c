#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints the string found after every 2 string characters
 * @str: string to be dissected
 * Return: void
 */
void puts2(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (counter % 2 == 0)
			_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
