#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *printstring;
	unsigned int index, column;

	if (str == NULL)
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
