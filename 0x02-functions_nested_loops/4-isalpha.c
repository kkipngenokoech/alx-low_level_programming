#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if parameter passed is an alphabet
 * @c: parameter passed to be checkd if is alpha
 * Returns: 1 if is alpha else 0
 */
int _isalpha(int c)
{
	char character;

	character = c;
	if ((character >= 'a' && Character <= 'z') || (character >= 'A' && character <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
