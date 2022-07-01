#include<stdio.h>

/**
 * main - prints numbers from 0 to 9 using putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
