#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a given number
 * @n: parameter to be passed
 * Return: returns the value of the last digit 
 */
int print_last_digit(int n)
	{
		int number;

		number = n;
		if (number < 0)
		{
			number = (-1 * (number % 10));
			_putchar (number + '0');
			return (number);
		}
		else
		{
			number = (number % 10);
			_putchar (number + '0');
			return (number);
		}
	}
