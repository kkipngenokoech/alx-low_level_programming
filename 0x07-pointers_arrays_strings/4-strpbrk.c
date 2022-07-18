#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: location of the first occurence of string found in accept
 * @accept: bytes to be searched
 * Return:  a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int index, innerloop;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (innerloop = 0; accept[innerloop] != '\0'; index++)
		{
			if (s[index] == accept[innerloop])
			{
				return (index++);
			}
		}
	}
	return ('\0');
}
