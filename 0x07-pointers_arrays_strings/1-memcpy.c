#include "main.h"
#include <stdio.h>
/**
 * _memcpy - a function that copies memory area.
 * @dest: memory adress to be copied to
 * @src: memeory address to be copied from
 * @n: size of bytes to be copied from src to dest
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (0);
}
