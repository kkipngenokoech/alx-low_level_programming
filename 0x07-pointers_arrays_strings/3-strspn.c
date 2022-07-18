#include "main.h"
#include <stdio.h>
/**
 * _strspn -a function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: bytes to be checked
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, bool, innerloop;

	for (index = 0; s[index] != '\0'; index++)
	{
		bool = 1;
		for (innerloop = 0; accept[innerloop] != '\0'; innerlooop++)
		{
			if (s[index] == accept[innerloop])
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
		{
			break;
		}
	}
	return (index);
}
