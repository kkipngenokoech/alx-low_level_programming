#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if parameter passed is an alphabet
 * @c: parameter passed to be checkd if is alpha
 * Returns: 1 if is alpha else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && C <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
