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
	char s1copy[98];

	for (loop = 0; loop <= 98; loop++)
		s1copy[loop] = dest[loop];
	for (counter = 0; counter <= n; counter++)
		s1copy[counter] = src[counter];
	return (s1copy);
}
