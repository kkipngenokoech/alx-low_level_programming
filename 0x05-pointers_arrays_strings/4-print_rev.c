#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @s: string passed as a parameter
 * Return: void
 */
void print_rev(char *s)
{
	int start, end, temp, counter;

	start = 0;
	end = 0;
	counter = 0;
	end = _strlen(s)-1;
	while (start < end)
	{
		temp = s[end];
		s[end] = s[start];
		s[start] = temp;
		start++;
		end--;
	}
	while (s[counter] != '\0')
	{
		_putchar(s[counter]);
	}
}
