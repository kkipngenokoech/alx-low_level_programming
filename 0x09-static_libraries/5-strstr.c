#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring.
 * @haystack: main string
 * @needle: substring
 * Return: returns a pointer to the beginning of the located substring ornull if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystackcopy = haystack, *needlecopy = needle;

	while (*haystack != '\0')
	{
		while (*needle)
		{
			if (*needle++ != *haystack++)
				break;
		}
		if (!*needle)
		{
			return (haystackcopy);
		}
		needle = needlecopy;
		haystackcopy++;
		haystack = haystackcopy;
	}
	return (0);
}
