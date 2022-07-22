#include "main.h"
#include <stdio.h>
/**
 * _strcmp - it compares two strings
 * @s1: first string passed
 * @s2: second string passed
 * Return: returns zero if the two are equal else another number
 */
int _strcmp(char *s1, char *s2)
{
	int counter, checker;

	counter = 0;
	checker = 0;
	while (checker == 0)
	{
		if(s1[counter] == '\0' || s2[counter] == '\0')
			break ;
		else
		{
			checker = s1[counter] - s2[counter];
			counter++;
		}
	}
	return (checker);
}
