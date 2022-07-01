#include<stdio.h>

/**
 * main - printing hexadecimal in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
