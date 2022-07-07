#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if an arguement is a digit or not
 * @c: paramater to be checked
 *Return: return 1 if it is a digit else 0 if not
 */
int _isdigit(int c)
{
	int number;

	number = c;
	if (number >= 48 && number <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
