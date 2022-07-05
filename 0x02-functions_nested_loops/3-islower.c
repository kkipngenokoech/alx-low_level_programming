#include <stdio.h>
#include "main.h"

/**
 * _islower - prints out 1 if the lettter passed is lowercase else 0
 *
 * @c -parameter being passed in presumed a letter
 * Return: 1 on if lowercase else 0
 */
int _islower(int c)
{
	char character;

	character = c;
	if (character >= 'a' && character <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
