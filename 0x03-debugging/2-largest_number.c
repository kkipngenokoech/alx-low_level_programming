#include <stdio.h>
#include "main.h"

/**
 * largest_number - prints the largest number among the three
 * @a: parameter to be passed
 * @b: parameter to be passed
 * @c: parameter to be passed
 * Return: returns the largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	largest = a;
	if (a > b)
	{
		largest = a;
					        }
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
