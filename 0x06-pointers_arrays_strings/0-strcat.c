#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatinate two strings
 * @dest: first string to be passed
 * @src: second string to be passed
 * Return: a pointer to the new conactinated string
 */
char *_strcat(char *dest, char *src)
{
	int length, counter;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (counter = 0; src[counter] != '\0'; counter++, length++)
	{
		dest[length] = src[counter];
	}
	dest[length] = '\0';
	return (dest);
}
