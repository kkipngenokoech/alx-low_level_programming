#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all string letters
 * @str: string passed into the function
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (counter == 0 && (str[counter] >= 'a' && str[counter] <= 'z'))
		{
			str[counter] -= 32;
		}
		if (str[counter] == ' ' || str[counter] == '\t' || str[counter] == '\n' || str[counter] == ',' || str[counter] == ';' || str[counter] == '.' || str[counter] == '!' || str[counter] == '?' || str[counter] == '\"' || str[counter] == '(' || str[counter] == ')' || str[counter] == '{' || str[counter] == '}')
		{
			if (str[counter] >= 'a' && str[counter] <= 'z')
				str[counter] -= 32;
		}
		counter++;
	}
	return (str);
}

