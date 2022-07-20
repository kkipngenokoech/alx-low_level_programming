#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - it returns the value of X raised to power of Y
 * @x: first number that will be powered to
 * @y: number to will be used to power
 * Return: int results
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
