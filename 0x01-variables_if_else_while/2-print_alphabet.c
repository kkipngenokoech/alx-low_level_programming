#include<stdio.h>

/**
 * main - prints out lowercase letters from a to z
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
