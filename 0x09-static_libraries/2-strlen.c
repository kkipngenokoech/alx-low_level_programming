#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of the string passed
 * @s: passed size of a string parameter
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
