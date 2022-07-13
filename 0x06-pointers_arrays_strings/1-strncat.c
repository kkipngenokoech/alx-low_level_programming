#include "main.h"
#include <stdio.h>
/**
 * _strncpy - returns a concatinated string with the number of times specified
 * @dest: first string passed
 * @src: second string passed
 * @n: the number of times srccharacters is going to be added to dest
 * Return: returns a character pointer to the newly conactinated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, counter;

	length = 0;
	counter = 0;
	while (dest[length] != '\0')
		length++;
	while (counter < n)
	{
		dest[length] = src[counter];
		if (src[counter] == '\0')
			break;
		counter++;
		length++;
	}
	return (dest);
}
