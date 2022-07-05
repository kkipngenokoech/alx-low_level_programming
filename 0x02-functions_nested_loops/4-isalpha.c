#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if parameter passed is an alphabet
 * @c: parameter passed to be checkd if is alpha
 * Return: 1 if is alpha else 0
 */
int _isalpha(int c)
{
	char ch;

	ch = c;
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
