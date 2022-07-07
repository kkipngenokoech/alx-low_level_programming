#include "main.h"
#include <stdio.h>

/**
 * _isupper - returns 1 if c is uppercase
 * @c: paramter to be passed to the function
 * Return: it returns 1 if is upper case else 0
 */
int _isupper(int c)
{
	int character;

	character = c;
	if (character >= 'A' && character <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
