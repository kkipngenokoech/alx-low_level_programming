#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string to replace stars
 * @dest: string passed
 * @src: string passed
 * @n: number of copies to be made
 * Return: a pointer copy to the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter, loop;

	for (counter = 0; counter <= n; counter++)
		dest[counter] = src[counter];
	return (dest);
}
