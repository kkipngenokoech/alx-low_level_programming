#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *printstring;
	unsigned int index, column;

	if (str == printstring)
		return (NULL);
	for (index = 0; str[index] != '\0'; index++)
	{
		;
	}
	printstring = (char *)malloc(sizeof(char) * (index + 1));
	if (printstring == NULL)
		return (NULL);
	for (column = 0; column <= index; column++)
		printstring[column] = str[column];
	return (printstring);
}
