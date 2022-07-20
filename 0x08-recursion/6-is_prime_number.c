#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - a function that checks if a number is prime
 * @n: number to be checked
 * Return: 1if prime 0 if not
 */
int is_prime_number(int n)
{
	return (primenumber(n, 2));
}
/**
 * primenumber - checks for divisibility test
 * @n: number to be checked
 * @index: divisibility test
 */
int primenumber(int n, int index)
{
	if (index > n)
	{
		return (0);
	}
	if (index == n)
		return (1);
	if (n % index)
	{
		return (0);
	}
	return (primenumber(n, index+1));
}
