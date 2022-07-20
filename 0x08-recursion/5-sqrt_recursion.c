#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - it returns the natural square root of a number
 * @n: number passed to be checked if it has a natural squareroot
 * Return: the natural sqaureroot or none if it doesn't
 */
int _sqrt_recursion(int n)
{
	return (_squarereroot(n,1));
}
/**
 * _squareroot - trys to find the squarerrot of a number
 * @n: the number whose squarerrot is to be found
 * @index: number used to check for root
 * Return: returns the index or the number in which finds the squarerrot of the number
 */
int _squareroot(int n, int index)
{
	if (n < 0)
		return (-1);
	if ((index * index) > n)
		return (-1);
	if ((index * index) == n)
		return (index);
	return (_squareroot(n, index + 1));
}
