#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatination of two strings
 * @s1: first string to be concatinated
 * @s2: second string to be concatinated
 * Return: character pointer of the index of the new tring
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	unsigned int firstsize = 0, secondsize = 0, index;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[firstsize] != '\0')
		firstsize++;
	while (s2[secondsize] != '\0')
		secondsize++;
	if (n > secondsize)
		n = secondsize;
	p = malloc((firstsize + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (index = 0; index < firstsize; index++)
		p[index] = s1[index];
	for (; index < (firstsize + n); index++)
		p[index] = s2[index - firstsize];
	p[index] = '\0';
	return (p);

}
