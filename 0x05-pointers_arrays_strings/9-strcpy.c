#include <stdio.h>
#include "main.h"
/**
 * _strcpy - coping string to another variable
 * @dest: parameter to be copied to
 * @src: parameter to be copied from
 * Return: it returns a string
 */
char *_strcpy(char *dest, char *src)
{
	int counter;

	while (*src[counter] != '\0')
	{
		dest[counter] = *src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
