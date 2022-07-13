#include "main.h"
#include <stdio.h>
/**
 * string_toupper - it changes all lowercase letters of string to uppercase
 * @str: string passed into the function
 * Return: returns a string of uppercase
 */
char *string_toupper(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	return (str);
}
