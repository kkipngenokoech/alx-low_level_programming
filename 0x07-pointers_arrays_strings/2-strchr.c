#include "main.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: string passed to be used in locating the character c
 * @c: character to be located
 * Return: it returns the pointer of the address of the first occurence of character c or else returns null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
