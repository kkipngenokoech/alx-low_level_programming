#include <stdio.h>
#include "main.h"
/**
 * _abs - it computes the absolute value of an integrer
 * @n: parameter to be passed
 * Return: 0 always on success
 */
int _abs(int n)
{
	int number;

	number = n;
	if (number < 0)
	{
		return (number * (-1));
	}
	else
	{
		return (number);
	}
}
