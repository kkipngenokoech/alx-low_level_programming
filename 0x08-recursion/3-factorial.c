#include <stdio.h>
#include "main.h"
/**
 * factorial -  returns the factorial of a number
 * @n: number in which we are going to find its factorial
 */
int factorial(int n)
{
	int factor;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1);
