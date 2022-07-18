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
	char *haystackcopy;
	char *needlecopy;

	while (*haystack != '\0')
	{
		haystackcopy = haystack;
		needlecopy = needle;
		while (*haystack != '\0' && *needlecopy != '\0' && *haystack == *needlecopy)
		{
			haystack++;
			needlecopy++;
		}
		if (!*needlecopy)
			return (haystackcopy);
		haystack = haystackcopy + 1;
	}
}
