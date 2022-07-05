#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of the number if it is positive or negative
 * @n: number to be passed into the function
 * Return: 1 if postive ,0 if zero or -1 if negative
 */
int print_sign(int n)
{
	int number;

	number = n;
	if (number > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (number == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
