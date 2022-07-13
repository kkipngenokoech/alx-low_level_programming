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
	int length, counter, srclength;

	length = 0;
	srclength = 0;
	while (dest[length] != '\0')
		length++;
	while (src[srclength] != '\0')
		srclength++;
	if (srclength >= n)
	{
		for (counter = 0; counter <= n; counter++, length++)
		{
			dest[length] = src[counter];
		}
	}
	else
	{
		for (counter = 0; counter <= srclength; srclength++,length++)
		{
			dest[length] = src[srclength];
		}
		dest[length] = '\0';
	}
	return (dest);
}

