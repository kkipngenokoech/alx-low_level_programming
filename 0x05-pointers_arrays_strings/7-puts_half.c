#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string to be passed
 * Return: void
 */
void puts_half(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	if (counter % 2)
		counter /= 2;
	else
		counter = (counter-1) / 2;
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
