#include <stdio.h>
#include "main.h"
/**
 * rev_string -  a function that reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int start, end;
	char temp;

	start = 0;
	end = 0;
	while (s[end] != '\0')
	{
		end++;
	}
	end -= 1;
	while (start < end)
	{
		temp = s[end];
		s[end] = s[start];
		s[start] = temp;
		start++;
		end--;
	}
}
