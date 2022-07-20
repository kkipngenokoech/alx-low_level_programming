#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - prints the length of the string
 * @s: string to be couted
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
